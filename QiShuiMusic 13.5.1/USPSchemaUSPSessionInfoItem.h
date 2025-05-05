@interface USPSchemaUSPSessionInfoItem : SISchemaInstrumentationMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSData jsonData;
- (void)setName:;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasName;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)value;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasName:;
- (void)deleteName;
- (void)deleteValue;
@end
