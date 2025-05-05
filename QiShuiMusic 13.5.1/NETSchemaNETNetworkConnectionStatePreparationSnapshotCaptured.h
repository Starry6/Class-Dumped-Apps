@interface NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasDNS;
@property (nonatomic) BOOL hasHasDNS;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (BOOL)hasDNS;
- (void)writeTo:;
- (void)setHasDNS:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasHasDNS;
- (void)setHasHasDNS:;
- (void)deleteHasDNS;
@end
