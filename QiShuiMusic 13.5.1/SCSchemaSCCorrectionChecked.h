@interface SCSchemaSCCorrectionChecked : SISchemaInstrumentationMessage
@property (nonatomic) SCSchemaSCCheckCorrectionResponse checkCorrectionResponse;
@property (nonatomic) BOOL hasCheckCorrectionResponse;
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
- (BOOL)hasCheckCorrectionResponse;
- (void)deleteCheckCorrectionResponse;
- (id)checkCorrectionResponse;
- (void)setCheckCorrectionResponse:;
- (void)setHasCheckCorrectionResponse:;
@end
