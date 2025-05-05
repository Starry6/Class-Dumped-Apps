@interface PSDriverPolicyForApp : NSObject
@property (nonatomic) <PSDriverPolicyForAppDelegate> delegate;
@property (nonatomic) NSString bundleIdentifier;
- (id)specifiers;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithBundleIdentifier:;
- (void)setBundleIdentifier:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setValue:forSpecifier:;
- (id)valueForSpecifier:;
- (void)approvalStateDidChange:;
@end
