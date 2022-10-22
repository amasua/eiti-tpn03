#ifndef digital_h   /*! @cond    */
#define digital_h   /*! @endcond */


/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */
#include <stdint.h>

/* == Declaraciones de tipos de datos publicos ============================= */

typedef struct digital_output_s * digital_output_t;

/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

digital_output_t DigitalOutputCreate(uint8_t gpio, uint8_t bit);
void DigitalOutputActivate(digital_output_t output);
void DigitalOutputDeactivate(digital_output_t output);
void DigitalOutputToggle(digital_output_t output);

/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* digital_h */
