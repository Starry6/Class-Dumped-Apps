@interface MHSchemaMHAdMatchingStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSString modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) NSData jsonData;
- (id)modelVersion;
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
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteModelVersion;
@end
