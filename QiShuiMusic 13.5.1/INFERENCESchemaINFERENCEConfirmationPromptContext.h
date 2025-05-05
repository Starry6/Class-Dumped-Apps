@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage
@property (nonatomic) NSString anonymizedEntityPresented;
@property (nonatomic) BOOL hasAnonymizedEntityPresented;
@property (nonatomic) NSInteger resolution;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)setResolution:;
- (void)writeTo:;
- (int)resolution;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAnonymizedEntityPresented;
- (void)deleteAnonymizedEntityPresented;
- (BOOL)hasResolution;
- (void)setHasResolution:;
- (void)deleteResolution;
- (id)anonymizedEntityPresented;
- (void)setAnonymizedEntityPresented:;
- (void)setHasAnonymizedEntityPresented:;
@end
