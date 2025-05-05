@interface WFRequestRideContextualAction : WFContextualAction
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) CLLocation destination;
@property (nonatomic) NSString destinationName;
- (id)applicationBundleIdentifier;
- (id)uniqueIdentifier;
- (id)destination;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)destinationName;
- (BOOL)showsUserInterfaceWhenRunning;
- (id)initWithApplicationBundleIdentifier:destination:name:;
+ (BOOL)supportsSecureCoding;
@end
