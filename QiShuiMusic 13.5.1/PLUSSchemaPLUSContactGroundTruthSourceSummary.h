@interface PLUSSchemaPLUSContactGroundTruthSourceSummary : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) NSData jsonData;
- (void)setCount:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)deleteCount;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)source;
- (BOOL)readFrom:;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (void)setSource:;
- (BOOL)isEqual:;
- (void)setHasCount:;
- (BOOL)hasCount;
- (void)deleteSource;
@end
