@interface TTSSchemaTTSSpeechFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSArray errorCodes;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)errorCodes;
- (void)setErrorCodes:;
- (void)clearErrorCodes;
- (void)deleteErrorCodes;
- (void)addErrorCodes:;
- (unsigned long long)errorCodesCount;
- (int)errorCodesAtIndex:;
@end
