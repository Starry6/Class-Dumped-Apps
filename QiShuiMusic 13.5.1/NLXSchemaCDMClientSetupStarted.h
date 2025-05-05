@interface NLXSchemaCDMClientSetupStarted : SISchemaInstrumentationMessage
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) NSInteger serviceGraphName;
@property (nonatomic) BOOL hasServiceGraphName;
@property (nonatomic) NSData jsonData;
- (BOOL)hasExists;
- (BOOL)exists;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setExists:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteExists;
- (void)setHasExists:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setServiceGraphName:;
- (BOOL)hasServiceGraphName;
- (void)setHasServiceGraphName:;
- (void)deleteServiceGraphName;
- (int)serviceGraphName;
@end
