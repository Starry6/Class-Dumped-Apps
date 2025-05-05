@interface CKDiscretionaryOptions : NSObject
@property (nonatomic) NSString applicationBundleIdentifierOverride;
@property (nonatomic) NSString secondarySourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) Q discretionaryNetworkBehavior;
@property (nonatomic) BOOL requiresNetworkAccess;
- (BOOL)allowsCellularAccess;
- (BOOL)allowsExpensiveNetworkAccess;
- (void)setApplicationBundleIdentifierOverride:;
- (void)setAllowsExpensiveNetworkAccess:;
- (void)setTimeoutIntervalForResource:;
- (double)timeoutIntervalForResource;
- (void)setAllowsCellularAccess:;
- (void)setRequiresNetworkAccess:;
- (BOOL)requiresNetworkAccess;
- (void)setSecondarySourceApplicationBundleId:;
- (id)secondarySourceApplicationBundleId;
- (unsigned long long)discretionaryNetworkBehavior;
- (id)initWithCoder:;
- (void)setDiscretionaryNetworkBehavior:;
- (void)encodeWithCoder:;
- (id)applicationBundleIdentifierOverride;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
