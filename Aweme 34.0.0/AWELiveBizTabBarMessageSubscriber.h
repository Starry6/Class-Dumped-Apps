@interface AWELiveBizTabBarMessageSubscriber : NSObject
@property (nonatomic) AWETabbarLiveGuideBubbleManager liveGuideBubbleManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabBarController:didSelectItemType:previousItemType:;
- (void)setLiveGuideBubbleManager:;
- (id)liveGuideBubbleManager;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
