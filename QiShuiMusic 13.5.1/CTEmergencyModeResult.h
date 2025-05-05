@interface CTEmergencyModeResult : NSObject
@property (nonatomic) CTEmergencyMode mode;
@property (nonatomic) CTXPCServiceSubscriptionContext context;
- (id)context;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mode;
- (id)copyWithZone:;
- (id)initWithMode:andContext:;
+ (BOOL)supportsSecureCoding;
@end
