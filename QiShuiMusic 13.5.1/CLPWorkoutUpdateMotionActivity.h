@interface CLPWorkoutUpdateMotionActivity : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) NSInteger activityType;
- (int)activityType;
- (void)setActivityType:;
- (void)setHasStartTime:;
- (BOOL)hasStartTime;
- (void)setStartTime:;
- (void)writeTo:;
- (unsigned long long)hash;
- (double)startTime;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (double)timestamp;
- (BOOL)hasActivityType;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasActivityType:;
@end
