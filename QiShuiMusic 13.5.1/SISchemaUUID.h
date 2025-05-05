@interface SISchemaUUID : SISchemaInstrumentationMessage
@property (nonatomic) NSData value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSData jsonData;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)willProduceDictionaryRepresentation:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)initWithNSUUID:;
- (void)setHasValue:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithBytesAsData:;
- (id)toNSUUID;
- (void)deleteValue;
@end
