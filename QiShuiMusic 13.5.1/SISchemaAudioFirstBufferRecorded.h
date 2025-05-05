@interface SISchemaAudioFirstBufferRecorded : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger audioInputRoute;
@property (nonatomic) BOOL hasAudioInputRoute;
@property (nonatomic) SISchemaHardwareInterfaceIdentifier hardwareInterfaceVendorID;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setAudioInputRoute:;
- (BOOL)hasAudioInputRoute;
- (void)setHasAudioInputRoute:;
- (void)deleteAudioInputRoute;
- (int)audioInputRoute;
- (BOOL)hasHardwareInterfaceVendorID;
- (void)deleteHardwareInterfaceVendorID;
- (id)hardwareInterfaceVendorID;
- (void)setHardwareInterfaceVendorID:;
- (void)setHasHardwareInterfaceVendorID:;
@end
