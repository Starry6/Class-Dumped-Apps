@interface POMMESSchemaPOMMESPegasusResponseClientDrivenContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteType;
- (int)type;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
@end
