@interface MHSchemaMHOnDeviceEndpointerContext : SISchemaInstrumentationMessage
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) NSData jsonData;
- (void)setHasEnabled:;
- (BOOL)hasEnabled;
- (id)initWithJSON:;
- (BOOL)enabled;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setEnabled:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteEnabled;
@end
