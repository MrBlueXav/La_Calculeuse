/*----------------------------------------------------------------------------------------
 * Model.hpp
 *
 * Xavier Halgand - 10/2024
 *
 -----------------------------------------------------------------------------------------
 */


#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>
#include <gui/common/laCalculeuse.hpp>

class ModelListener;

/**
 * The Model class defines the data model in the model-view-presenter paradigm.
 * The Model is a singular object used across all presenters. The currently active
 * presenter will have a pointer to the Model through deriving from ModelListener.
 *
 * The Model will typically contain UI state information that must be kept alive
 * through screen transitions. It also usually provides the interface to the rest
 * of the system (the backend). As such, the Model can receive events and data from
 * the backend and inform the current presenter of such events through the modelListener
 * pointer, which is automatically configured to point to the current presenter.
 * Conversely, the current presenter can trigger events in the backend through the Model.
 */
class Model {
public:
	Model();

	/**
	 * Sets the modelListener to point to the currently active presenter. Called automatically
	 * when switching screen.
	 */
	void bind(ModelListener *listener) {
		modelListener = listener;
	}

	/**
	 * This function will be called automatically every frame. Can be used to e.g. sample hardware
	 * peripherals or read events from the surrounding system and inject events to the GUI through
	 * the ModelListener interface.
	 */
	void tick();

	/*-------------------------------------------*/
	void reset_X();
	void reset_Y();
	void addXY();
	void subXY();
	void mulXY();
	void divXY();
	void update_NumberX(uint8_t position, uint8_t value);
	void update_NumberY(uint8_t position, uint8_t value);
	/*-------------------------------------------*/

protected:

	/**
	 * Pointer to the currently active presenter.
	 */
	ModelListener *modelListener;

	/*-------------------------------------------*/

	int32_t numberX;
	int32_t numberY;
	uint8_t digitsX[NbrOfDigits];
	uint8_t digitsY[NbrOfDigits];

	/*-------------------------------------------*/
};

#endif // MODEL_HPP
