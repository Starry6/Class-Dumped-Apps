@interface AWEBizTabBarFeedItemConfigAbilityProxy : NSObject
@property (nonatomic) AWEFeedRootViewController feedRootViewController;
@property (nonatomic) <AWEBizTabBarFeedItemConfigCallProtocol> itemConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedRootViewController;
- (void)setItemConfig:;
- (id)itemConfig;
- (void)showBackgroundImagesWithProgress:;
- (void)setFeedRootViewController:;
- (BOOL)shouldBeginVerticalPanGesture;
- (void).cxx_destruct;
@end
