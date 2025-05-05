@interface NLXSchemaMentionResolverSpanData : SISchemaInstrumentationMessage
@property (nonatomic) double jointScore;
@property (nonatomic) BOOL hasJointScore;
@property (nonatomic) double modelScore;
@property (nonatomic) BOOL hasModelScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setModelScore:;
- (BOOL)hasModelScore;
- (void)setHasModelScore:;
- (void)deleteModelScore;
- (double)modelScore;
- (void)setJointScore:;
- (BOOL)hasJointScore;
- (void)setHasJointScore:;
- (void)deleteJointScore;
- (double)jointScore;
@end
