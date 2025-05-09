@interface MHSchemaMHAssistantDaemonAudioRecordingFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSString audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (nonatomic) NSString audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)reason;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setReason:;
- (BOOL)hasReason;
- (void)setHasReason:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteReason;
- (BOOL)hasAudioInterfaceVendorId;
- (void)deleteAudioInterfaceVendorId;
- (id)audioInterfaceVendorId;
- (void)setAudioInterfaceVendorId:;
- (void)setHasAudioInterfaceVendorId:;
- (BOOL)hasAudioInterfaceProductId;
- (void)deleteAudioInterfaceProductId;
- (id)audioInterfaceProductId;
- (void)setAudioInterfaceProductId:;
- (void)setHasAudioInterfaceProductId:;
@end
