@interface SISchemaUserDataContainer : SISchemaInstrumentationMessage
@property (nonatomic) NSData c;
@property (nonatomic) BOOL hasC;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (void)setC:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)c;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteC;
- (BOOL)hasC;
- (void)setHasC:;
@end
