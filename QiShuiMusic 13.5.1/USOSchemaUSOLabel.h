@interface USOSchemaUSOLabel : SISchemaInstrumentationMessage
@property (nonatomic) NSString value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSData jsonData;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteValue;
@end
