@interface TRIDownloadOptions : NSObject
@property (nonatomic) NSObject<OS_xpc_object> activity;
@property (nonatomic) Q requiredCapability;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsBatteryUsage;
@property (nonatomic) Q discretionaryBehavior;
- (BOOL)allowsCellularAccess;
- (void)setAllowsCellularAccess:;
- (id)init;
- (void)setActivity:;
- (void)setAllowsBatteryUsage:;
- (void)setDiscretionaryBehavior:;
- (id)initWithAllowsCellular:discretionaryBehavior:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)allowsBatteryUsage;
- (id)activity;
- (void)encodeWithCoder:;
- (unsigned long long)requiredCapability;
- (void).cxx_destruct;
- (id)initFromPersistedBehavior:;
- (id)description;
- (unsigned long long)discretionaryBehavior;
- (BOOL)isEqual:;
- (id)serializeToPersistedBehavior;
+ (BOOL)supportsSecureCoding;
+ (id)inexpensiveOptions;
@end
