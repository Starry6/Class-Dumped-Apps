@interface NETSchemaNETBluetoothDevice : SISchemaInstrumentationMessage
@property (nonatomic) I index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) double rssi;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) NSData jsonData;
- (double)rssi;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setRssi:;
- (unsigned int)index;
- (void)setIndex:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasIndex:;
- (BOOL)hasIndex;
- (void)setHasRssi:;
- (BOOL)hasRssi;
- (void)deleteIndex;
- (void)deleteRssi;
@end
