@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage
@property (nonatomic) NSString modelName;
@property (nonatomic) BOOL hasModelName;
@property (nonatomic) SISchemaVersion modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) NSData jsonData;
- (id)modelName;
- (id)modelVersion;
- (void)setModelName:;
- (void)setHasModelVersion:;
- (void)setModelVersion:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (BOOL)hasModelVersion;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasModelName;
- (void)deleteModelName;
- (void)deleteModelVersion;
- (void)setHasModelName:;
@end
