@interface CMCalorieData : NSObject
@property (nonatomic) q workoutType;
@property (nonatomic) double duration;
@property (nonatomic) NSNumber mets;
@property (nonatomic) NSNumber basalMets;
@property (nonatomic) NSNumber totalCalories;
@property (nonatomic) NSNumber basalCalories;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (double)duration;
- (id)copyWithZone:;
- (id)mets;
- (long long)workoutType;
- (id)initWithWorkoutType:duration:mets:basalMets:totalCalories:basalCalories:;
- (id)basalMets;
- (id)totalCalories;
- (id)basalCalories;
+ (BOOL)supportsSecureCoding;
@end
