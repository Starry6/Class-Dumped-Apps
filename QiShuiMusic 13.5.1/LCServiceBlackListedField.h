@interface LCServiceBlackListedField : SISchemaInstrumentationMessage
@property (nonatomic) NSString fullyQualifiedPath;
@property (nonatomic) BOOL hasFullyQualifiedPath;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasFullyQualifiedPath;
- (void)deleteFullyQualifiedPath;
- (id)fullyQualifiedPath;
- (void)setFullyQualifiedPath:;
- (void)setHasFullyQualifiedPath:;
@end
