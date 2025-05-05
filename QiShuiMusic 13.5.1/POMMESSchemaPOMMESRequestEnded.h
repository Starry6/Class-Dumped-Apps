@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isHandledByPreflight;
@property (nonatomic) BOOL hasIsHandledByPreflight;
@property (nonatomic) POMMESSchemaPOMMESRequestResult result;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) NSData jsonData;
- (id)result;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasResult:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasResult;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setResult:;
- (void)setIsHandledByPreflight:;
- (BOOL)hasIsHandledByPreflight;
- (void)setHasIsHandledByPreflight:;
- (void)deleteIsHandledByPreflight;
- (void)deleteResult;
- (BOOL)isHandledByPreflight;
@end
