@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger transformer;
@property (nonatomic) BOOL hasTransformer;
@property (nonatomic) NSInteger targetPlugin;
@property (nonatomic) BOOL hasTargetPlugin;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (void)setTransformer:;
- (id)suppressMessageUnderConditions;
- (int)transformer;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasTransformer;
- (void)setHasTransformer:;
- (void)deleteTransformer;
- (void)setTargetPlugin:;
- (BOOL)hasTargetPlugin;
- (void)setHasTargetPlugin:;
- (void)deleteTargetPlugin;
- (int)targetPlugin;
@end
