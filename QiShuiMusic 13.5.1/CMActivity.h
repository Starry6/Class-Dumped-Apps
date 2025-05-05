@interface CMActivity : CMLogItem
@property (nonatomic) NSInteger confidence;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isWalking;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isDriving;
@property (nonatomic) BOOL maybeExitingVehicle;
@property (nonatomic) BOOL hasExitedVehicle;
- (BOOL)isMoving;
- (int)confidence;
- (id)initWithCoder:;
- (BOOL)isRunning;
- (id)activity;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isWalking;
- (BOOL)isDriving;
- (id)initWithMotionActivity:;
- (BOOL)maybeExitingVehicle;
- (BOOL)hasExitedVehicle;
+ (BOOL)supportsSecureCoding;
@end
