@interface INCAppLaunchRequest : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSDictionary options;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) BOOL supportedInCarPlay;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)options;
- (void).cxx_destruct;
- (id)userActivity;
- (id)description;
- (id)initWithURL:error:;
- (BOOL)isEqual:;
- (id)URL;
- (id)copyWithZone:;
- (id)URLOverrideForURL:;
- (void)performWithCompletionHandler:;
- (id)initWithInteraction:userActivity:inBackground:error:;
- (id)initWithIntent:userActivity:inBackground:error:;
- (id)initWithAudioCallIntentForCarousel:error:;
- (id)initWithBundleIdentifier:options:URL:userActivity:;
- (BOOL)isSupportedInCarPlay;
- (void)performWithService:completionHandler:;
- (void)observeForAppLaunchWithTimeout:completionHandler:;
@end
