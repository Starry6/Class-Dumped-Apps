@interface NLXSchemaMARRSQueryRewriteHypothesis : SISchemaInstrumentationMessage
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSInteger rewriteType;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) NSData jsonData;
- (double)confidence;
- (void)setConfidence:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (int)rewriteType;
- (void)setRewriteType:;
- (void)deleteConfidence;
- (BOOL)hasRewriteType;
- (void)setHasRewriteType:;
- (void)deleteRewriteType;
@end
