@interface SAHLWorkoutType : AceObject
@property (nonatomic) NSString swimmingLocationType;
@property (nonatomic) NSString workoutCategory;
@property (nonatomic) NSString workoutLocationType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)workoutLocationType;
- (void)setWorkoutLocationType:;
- (id)swimmingLocationType;
- (void)setSwimmingLocationType:;
- (id)workoutCategory;
- (void)setWorkoutCategory:;
+ (id)workoutType;
+ (id)workoutTypeWithDictionary:context:;
@end
