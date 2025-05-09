@interface AWDCoreRoutineTrafficConditions : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasVehicleConnected;
@property (nonatomic) BOOL vehicleConnected;
@property (nonatomic) BOOL hasPredictedLocationOfInterest;
@property (nonatomic) BOOL predictedLocationOfInterest;
@property (nonatomic) BOOL hasTrafficDensity;
@property (nonatomic) NSInteger trafficDensity;
@property (nonatomic) BOOL hasPrecisionRecall;
@property (nonatomic) NSInteger precisionRecall;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)vehicleConnected;
- (void)setPrecisionRecall:;
- (void)setHasPrecisionRecall:;
- (BOOL)hasPrecisionRecall;
- (int)precisionRecall;
- (void)setVehicleConnected:;
- (void)setHasVehicleConnected:;
- (BOOL)hasVehicleConnected;
- (void)setPredictedLocationOfInterest:;
- (void)setHasPredictedLocationOfInterest:;
- (BOOL)hasPredictedLocationOfInterest;
- (int)trafficDensity;
- (void)setTrafficDensity:;
- (void)setHasTrafficDensity:;
- (BOOL)hasTrafficDensity;
- (id)trafficDensityAsString:;
- (int)StringAsTrafficDensity:;
- (id)precisionRecallAsString:;
- (int)StringAsPrecisionRecall:;
- (BOOL)predictedLocationOfInterest;
@end
