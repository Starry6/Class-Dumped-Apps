@interface GEOEVStateInfo : PBCodable
@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) I remainingBatteryPercentage;
@property (nonatomic) BOOL hasRemainingBatteryCharge;
@property (nonatomic) I remainingBatteryCharge;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)remainingBatteryPercentage;
- (void)setRemainingBatteryPercentage:;
- (void)setHasRemainingBatteryPercentage:;
- (BOOL)hasRemainingBatteryPercentage;
- (unsigned int)remainingBatteryCharge;
- (void)setRemainingBatteryCharge:;
- (void)setHasRemainingBatteryCharge:;
- (BOOL)hasRemainingBatteryCharge;
+ (BOOL)isValid:;
@end
