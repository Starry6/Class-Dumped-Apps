@interface AWENearbyPublishGuideManager : NSObject
@property (nonatomic) AWENearbyIconGuideViewController iconGuideViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabBarController:didSelectItemType:previousItemType:;
- (void)__observeTabChange;
- (void)__handleTabChange:;
- (void)__handleFeedContainerIndexChange:;
- (long long)__indexForNearby;
- (id)iconGuideViewController;
- (id)__plusButton;
- (void)setIconGuideViewController:;
- (id)init;
- (void).cxx_destruct;
- (id)__containerView;
- (id)__contentViewController;
+ (id)sharedInstance;
@end
