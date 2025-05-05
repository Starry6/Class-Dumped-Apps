@interface NLXSchemaCDMParser : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger algorithm;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) NSInteger parserId;
@property (nonatomic) BOOL hasParserId;
@property (nonatomic) NSData jsonData;
- (int)algorithm;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setAlgorithm:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasAlgorithm:;
- (BOOL)hasAlgorithm;
- (void)deleteAlgorithm;
- (void)setParserId:;
- (BOOL)hasParserId;
- (void)setHasParserId:;
- (void)deleteParserId;
- (int)parserId;
@end
