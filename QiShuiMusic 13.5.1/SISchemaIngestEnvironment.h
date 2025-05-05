@interface SISchemaIngestEnvironment : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger buildVariant;
@property (nonatomic) BOOL hasBuildVariant;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)buildVariant;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setBuildVariant:;
- (BOOL)hasBuildVariant;
- (void)setHasBuildVariant:;
- (void)deleteBuildVariant;
@end
