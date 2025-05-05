@interface POMMESSchemaPOMMESPegasusSearchQueryUserSpan : SISchemaInstrumentationMessage
@property (nonatomic) NSString label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasLabel;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setLabel:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)label;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasLabel:;
- (void)deleteLabel;
@end
