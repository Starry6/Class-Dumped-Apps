@interface CMSwimWorkout : CMWorkout
@property (nonatomic) q location;
@property (nonatomic) double poolLength;
- (void)dealloc;
- (id)initWithCoder:;
- (long long)location;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSessionId:location:poolLength:;
- (id)initWithSessionId:locationType:poolLength:;
- (id)initWithSessionId:locationType:poolLength:startDate:endDate:;
- (id)_initWithSessionId:locationType:poolLength:startDate:endDate:;
- (double)poolLength;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)swimLocationName:;
+ (id)swimWorkoutInstance:;
@end
