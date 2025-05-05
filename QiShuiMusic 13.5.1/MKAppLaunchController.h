@interface MKAppLaunchController : NSObject
@property (nonatomic) NSURL webURL;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (void)lookUpAppStoreURLForBundle:usingTarget:completionHandler:;
+ (id)sharedController;
+ (void)launchAttributionURLs:withAttribution:completionHandler:;
+ (void)launchAttributionURLs:withAttribution:usingTarget:completionHandler:;
@end
