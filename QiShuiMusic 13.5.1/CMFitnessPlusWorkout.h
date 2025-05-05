@interface CMFitnessPlusWorkout : CMWorkout
@property (nonatomic) NSString catalogWorkoutId;
@property (nonatomic) q mediaType;
- (long long)mediaType;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSessionId:type:catalogWorkoutId:mediaType:;
- (id)initWithSessionId:type:catalogWorkoutId:mediaType:error:;
- (id)initWithSessionId:type:catalogWorkoutId:mediaType:locationType:error:;
- (id)catalogWorkoutId;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)mediaTypeName:;
+ (id)fitnessPlusWorkoutInstance:;
@end
