@interface SISchemaTurnMTERequest : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID mteRequestId;
@property (nonatomic) BOOL hasMteRequestId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setMteRequestId:;
- (BOOL)hasMteRequestId;
- (void)deleteMteRequestId;
- (id)mteRequestId;
- (void)setHasMteRequestId:;
@end
