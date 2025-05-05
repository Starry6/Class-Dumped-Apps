@interface SSAppWakeRequest : NSObject
@property (nonatomic) NSString appIdentifier;
@property (nonatomic) NSDictionary launchOptions;
@property (nonatomic) BOOL shouldLaunchApp;
@property (nonatomic) NSString processAssertionIdentifier;
@property (nonatomic) double processAssertionInterval;
@property (nonatomic) NSString processAssertionReason;
- (void)setAppIdentifier:;
- (id)appIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)launchOptions;
- (void)setLaunchOptions:;
- (id)processAssertionIdentifier;
- (void)setProcessAssertionIdentifier:;
- (double)processAssertionInterval;
- (void)setProcessAssertionInterval:;
- (id)processAssertionReason;
- (void)setProcessAssertionReason:;
- (BOOL)shouldLaunchApp;
- (void)setShouldLaunchApp:;
+ (id)familyContentRemovalRequestWithAppIdentifier:accountPairs:;
+ (id)newsstandFinishRequestWithAppIdentifier:issueIdentifiers:;
@end
