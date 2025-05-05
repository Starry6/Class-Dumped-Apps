@interface POMMESSchemaPOMMESPegasusRequestStarted : SISchemaInstrumentationMessage
@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) BOOL hasPayloadSizeInKB;
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
- (void)setPayloadSizeInKB:;
- (BOOL)hasPayloadSizeInKB;
- (void)setHasPayloadSizeInKB:;
- (void)deletePayloadSizeInKB;
- (double)payloadSizeInKB;
@end
