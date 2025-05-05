@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSInteger bluetoothAudioDeviceCategory;
@property (nonatomic) BOOL hasBluetoothAudioDeviceCategory;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setState:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)state;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasState;
- (void)setHasState:;
- (void)deleteState;
- (void)setBluetoothAudioDeviceCategory:;
- (BOOL)hasBluetoothAudioDeviceCategory;
- (void)setHasBluetoothAudioDeviceCategory:;
- (void)deleteBluetoothAudioDeviceCategory;
- (int)bluetoothAudioDeviceCategory;
@end
