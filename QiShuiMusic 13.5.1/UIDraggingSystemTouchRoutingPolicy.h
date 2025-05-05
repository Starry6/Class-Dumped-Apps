@interface UIDraggingSystemTouchRoutingPolicy : NSObject
@property (nonatomic) NSDictionary contextIDsToAlwaysSendTouchesByDisplayIdentifier;
@property (nonatomic) NSArray contextIDsToExcludeFromHitTesting;
@property (nonatomic) BOOL hitTestingDisabled;
@property (nonatomic) NSArray contextIDsToAlwaysSendTouches;
- (id)initWithCoder:;
- (BOOL)isHitTestingDisabled;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setHitTestingDisabled:;
- (id)description;
- (id)contextIDsToAlwaysSendTouchesByDisplayIdentifier;
- (void)setContextIDsToAlwaysSendTouchesByDisplayIdentifier:;
- (id)contextIDsToExcludeFromHitTesting;
- (void)setContextIDsToExcludeFromHitTesting:;
- (id)contextIDsToAlwaysSendTouches;
- (void)setContextIDsToAlwaysSendTouches:;
+ (BOOL)supportsSecureCoding;
@end
