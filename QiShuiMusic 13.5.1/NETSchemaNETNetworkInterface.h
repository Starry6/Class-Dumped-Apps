@interface NETSchemaNETNetworkInterface : SISchemaInstrumentationMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) NSData jsonData;
- (int)connectionType;
- (BOOL)hasConnectionType;
- (void)setConnectionType:;
- (void)setHasConnectionType:;
- (void)setName:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasName;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasName:;
- (void)deleteName;
- (void)deleteConnectionType;
@end
