@interface GEOARSessionThermalPressure : PBCodable
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) I thermalPressure;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) NSInteger chargingState;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) NSInteger collectionTrigger;
- (void)setThermalPressure:;
- (void)readAll:;
- (BOOL)hasThermalPressure;
- (int)chargingState;
- (void)setCollectionTrigger:;
- (void)setChargingState:;
- (int)StringAsChargingState:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setHasThermalPressure:;
- (unsigned int)thermalPressure;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)chargingStateAsString:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (BOOL)hasChargingState;
- (void)setTimestamp:;
- (BOOL)hasCollectionTrigger;
- (int)StringAsCollectionTrigger:;
- (BOOL)readFrom:;
- (double)timestamp;
- (id)description;
- (id)collectionTriggerAsString:;
- (id)dictionaryRepresentation;
- (void)setHasChargingState:;
- (int)collectionTrigger;
- (void)setHasCollectionTrigger:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
