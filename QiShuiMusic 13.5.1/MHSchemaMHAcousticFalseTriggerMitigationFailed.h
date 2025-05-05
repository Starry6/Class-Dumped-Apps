@interface MHSchemaMHAcousticFalseTriggerMitigationFailed : SISchemaInstrumentationMessage
@property (nonatomic) I errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSData jsonData;
- (BOOL)hasErrorCode;
- (unsigned int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteErrorCode;
@end
