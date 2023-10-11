/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    nrf24l01.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "nrf24l01.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the NRF24L01_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

NRF24L01_DATA nrf24l01Data;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void NRF24L01_Initialize ( void )

  Remarks:
    See prototype in nrf24l01.h.
 */

void NRF24L01_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    nrf24l01Data.state = NRF24L01_STATE_INIT;



    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}


/******************************************************************************
  Function:
    void NRF24L01_Tasks ( void )

  Remarks:
    See prototype in nrf24l01.h.
 */

void NRF24L01_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( nrf24l01Data.state )
    {
        /* Application's initial state. */
        case NRF24L01_STATE_INIT:
        {
            bool appInitialized = true;


            if (appInitialized)
            {

                nrf24l01Data.state = NRF24L01_STATE_SERVICE_TASKS;
            }
            break;
        }

        case NRF24L01_STATE_SERVICE_TASKS:
        {

            break;
        }

        /* TODO: implement your application state machine.*/


        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
