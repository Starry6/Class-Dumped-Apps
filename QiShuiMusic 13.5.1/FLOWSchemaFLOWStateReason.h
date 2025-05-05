@interface FLOWSchemaFLOWStateReason : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger statusReason;
@property (nonatomic) BOOL hasStatusReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)statusReason;
- (BOOL)hasStatusReason;
- (void)setStatusReason:;
- (void)setHasStatusReason:;
- (void)deleteStatusReason;
@end
