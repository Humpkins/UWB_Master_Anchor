int encode_variable_length_integer(int value, unsigned char *encoded_bytes, int *num_bytes);

void sendMQTTpayload ( char * topic, char * payload );
int createMqttConnection ( char* clientID, char* User, char*Password );

void MemoryToString( const void *buffer, size_t length, char **hexString );

void mqtt_init ( char * mqtt_user, char * mqtt_psw, char * mqtt_id );

void mqtt_task ();


typedef struct {
    int availableToSend;
    char msgBuff[61];

    char * id;
    char * user;
    char * psw;
} mqt_t;