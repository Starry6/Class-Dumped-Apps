@interface AWETrackerBundleLoaderListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bundleDidLoaded:machoHeader:fromBundle:enterTag:cost:;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;
@end
