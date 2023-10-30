
#include "language.h"

const char * lang_es_co[_L_COUNT] = {
    [_L_ON] = "ENC",
    [_L_OFF] = "APA",
    [_L_BACK] = "Atrás",
    [_L_ERR] = "Error",
    [_L_ERR_CODE] = "Código Error",
    [_L_APP_AMIIBO] = "Emulador de Amiibo",
    [_L_APP_AMIIBOLINK] = "AmiiboLink",
    [_L_APP_BLE] = "Transferencia BLE",
    [_L_APP_BLE_TITLE] = "Transferencia BLE",
    [_L_APP_PLAYER] = "Reproductor Vídeo",
    [_L_APP_SET] = "Configuraciones",
    [_L_APP_SET_VERSION] = "Versión",
    [_L_APP_SET_SKIP_DRIVER_SELECT] = "Almacén Aut.",
    [_L_APP_SET_OLED_CONTRAST] = "Contraste OLED",
    [_L_APP_SET_OLED_CONTRAST_TITLE] = "Contraste OLED",
    [_L_APP_SET_LCD_BACKLIGHT] = "Brillo",
    [_L_APP_SET_LCD_BACKLIGHT_TITLE] = "Brillo de Fondo",
    [_L_APP_SET_ANIM] = "Animación Menú",
    [_L_APP_SET_LIPO_BAT] = "Batería LiPO",
    [_L_APP_SET_SHOW_MEM_USAGE] = "Mem. Usada",
    [_L_APP_SET_HIBERNATE] = "Encend. Rápido",
    [_L_APP_SET_SLEEP_TIMEOUT] = "Dormir en",
    [_L_APP_SET_LANGUAGE] = "Idioma",
    [_L_APP_SET_DFU] = "Actualizar Firmware",
    [_L_15S] = "15 Segundos",
    [_L_30S] = "30 Segundos",
    [_L_45S] = "45 Segundos",
    [_L_1MIN] = "1 Minuto",
    [_L_2MIN] = "2 Minutos",
    [_L_3MIN] = "3 Minutos",
    [_L_AMIIBO_KEY_UNLOADED] = "Sin Llave Amiibo",
    [_L_UPLOAD_KEY_RETAIL_BIN] = "Suba el archivo\nkey_retail.bin\nal directorio raíz.",
    [_L_KNOW] = "Entendido",
    [_L_RANDOM_GENERATION] = "Amiibo Aleatorio",
    [_L_AUTO_RANDOM_GENERATION] = "Aleat. Auto.",
    [_L_DELETE_TAG] = "Borrar Amiibo",
    [_L_BACK_TO_DETAILS] = "Volver Detll. Amiibo",
    [_L_BACK_TO_FILE_LIST] = "Volver Lista Archivos",
    [_L_BACK_TO_MAIN_MENU] = "Volver Menú Principal",
    [_L_FORMAT] = "Formato",
    [_L_FORMAT_STORAGE] = "Formatear Almacenamiento",
    [_L_DELETE_ALL_DATA] = "Ésto borrará todos los\ndatos. ¿Confirmas formateo?",
    [_L_CONFIRM] = "Confirmar",
    [_L_CANCEL] = "Cancelar",
    [_L_BACK_TO_LIST] = "Voler a Lista",
    [_L_NOT_MOUNTED] = "=====No Montado=====",
    [_L_MOUNTED_LFS] = "===[LFS]Montado===",
    [_L_MOUNTED_FFS] = "===[FFS]Montado===",
    [_L_TOTAL_SPACE] = "Espacio Total",
    [_L_AVAILABLE_SPACE] = "Espacio Libre",
    [_L_NOT_AMIIBO_FILE] = "Este no es un archivo\nAmiibo Válido",
    [_L_READ_FILE_FAILED] = "Error al leer archivo",
    [_L_INPUT_FOLDER_NAME] = "Nombre Carpeta:",
    [_L_INPUT_AMIIBO_NAME] = "Nombre Amiibo:",
    [_L_DELETE] = "Borrar",
    [_L_INPUT_NEW_NAME] = "Nuevo Nombre:",
    [_L_CREATE_NEW_FOLDER] = "Crear Nueva Carpeta...",
    [_L_CREATE_NEW_TAG] = "Crer Nuevo Amiibo...",
    [_L_RENAME] = "Renombrar",
    [_L_OPEN_FOLDER_FAILED] = "Fallo al abrir carpeta",
    [_L_RENAME_FAILED] = "Fallo al renombrar\nCódigo de Error",
    [_L_MAIN_RETURN] = ">>REGRESAR<<",
    [_L_RANDOM_MODE_MANUAL] = "Aleatorio (Manual)",
    [_L_RANDOM_MODE_AUTO] = "Aleatorio (Auto)",
    [_L_SEQUENCE_MODE] = "Modo Secuencial",
    [_L_READ_WRITE_MODE] = "Modo Lectura/Escrit.",
    [_L_AMIIBOLINK_V1] = "V1",
    [_L_AMIIBOLINK_V2] = "V2",
    [_L_AMILOOP] = "AmiLoop",
    [_L_MODE] = "Modo",
    [_L_AUTO_RANDOM] = "Aleat. Autom.",
    [_L_COMPATIBLE_MODE] = "Compatibil.",
    [_L_TAG_DETAILS] = "Detalles Amiibo",
    [_L_MAIN_MENU] = ">>Menú Principal<<",
    [_L_MODE_RANDOM] = "Aleat. Man.",
    [_L_MODE_CYCLE] = "Secuencial",
    [_L_MODE_NTAG] = "Lect./Escr.",
    [_L_MODE_RANDOM_AUTO_GEN] = "Aleat. Auto.",
    [_L_BLANK_TAG] = "No Amiibo Asignado",
    [_L_APP_AMIIDB] = "Base datos Amiibo",
    [_L_APP_AMMIDB_BROWSER] = "Explorar...",
    [_L_APP_AMIIDB_SEARCH] = "Buscar...",
    [_L_APP_AMIIDB_MY_FAVORITES] = "Mis Favoritos...",
    [_L_APP_AMIIDB_MY_TAGS] = "Mis Amiibo...",
    [_L_APP_AMIIDB_SETTINGS] = "Configuraciones...",
    [_L_APP_AMIIDB_EXIT] = "[Salir]",
    [_L_APP_AMIIDB_BACK] = "[Regresar]",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY] = "Llaves",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_LOADED] = "Cargadas",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_NOT_LOADED] = "NO Cargadas",
    [_L_APP_AMIIDB_SETTINGS_SLOT_NUM] = "Cant. Ranuras",
    [_L_APP_AMIIDB_DETAIL_FAVORITE] = "Favorito...",
    [_L_APP_AMIIDB_DETAIL_SAVE_AS] = "Asiganar en...",
    [_L_APP_AMIIDB_DETAIL_BACK_DETAIL] = "[Volver a Detalles]",
    [_L_APP_AMIIDB_DETAIL_BACK_LIST] = "[Volver a Lista]",
    [_L_APP_AMIIDB_SEARCH_HEAD] = "Buscar:",
    [_L_APP_AMIIDB_MORE] = "[Más...]",
    [_L_APP_AMIIDB_EMPTY_TAG] = "<No Asignado>",
    [_L_APP_AMIIDB_SLOT_DELETE] = "Borrar...",
    [_L_APP_AMIIDB_CONFIRM] = "Confirmar",
    [_L_APP_AMIIDB_CANCEL] = "Cancelar",
    [_L_APP_AMIIDB_TIPS] = "Nota",
    [_L_APP_AMIIDB_NEW] = "Nueva...",
    [_L_APP_AMIIDB_EMPTY] = "Vacía...",
    [_L_APP_AMIIDB_DELETE] = "Borrar...",
    [_L_APP_AMIIDB_FAV_NEW_HEAD] = "Nueva Carp. Favoritos:",
    [_L_APP_AMIIDB_FAV_EMPTY_MSG] = "¿Borrar Carp. Favoritos?",
    [_L_APP_AMIIDB_FAV_DELETE_MSG] = "¿Confirma Borrado?",
    [_L_APP_AMIIDB_FAV_SELECT_FOLDER] = "Selec. Carp. Favoritos...",
    [_L_APP_AMIIDB_FAV_SUCCESS] = "¡Favorito Correcto!",
    [_L_APP_AMIIDB_FAV_FAILED] = "¡Favorito Faillido!",
    [_L_APP_AMIIDB_SLOT_SAVE_SUCCESS] = "Asignación Correcta",
    [_L_APP_AMIIDB_SLOT_SAVE_FAILED] = "¡Asignación Fallida!",
};
