@interface BKSHIDTouchRoutingPolicy : NSObject
@property (nonatomic) BSMutableSettings settings;
@property (nonatomic) NSArray contextIDsToAlwaysSendTouches;
@property (nonatomic) NSArray contextIDsToExcludeFromHitTesting;
@property (nonatomic) BOOL avoidHitTesting;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)contextIDsToExcludeFromHitTesting;
- (void)setContextIDsToExcludeFromHitTesting:;
- (id)contextIDsToAlwaysSendTouches;
- (void)setContextIDsToAlwaysSendTouches:;
- (BOOL)shouldAvoidHitTesting;
- (void)setAvoidHitTesting:;
+ (BOOL)supportsSecureCoding;
+ (void)inspectChangesWithOldPolicy:newPolicy:usingBlock:;
@end
