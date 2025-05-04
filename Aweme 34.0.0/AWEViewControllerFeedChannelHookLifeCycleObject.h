@interface AWEViewControllerFeedChannelHookLifeCycleObject : NSObject
@property (nonatomic) <AWETabBarItemChannelObjectProtocol> tabBarChannel;
@property (nonatomic) AWEFeedChannelObject channelObject;
@property (nonatomic) <AWEFeedChannelHookLifeCycleDelegate> channelDelegate;
- (id)tabBarChannel;
- (void)setTabBarChannel:;
- (id)channelObject;
- (void)setChannelObject:;
- (void).cxx_destruct;
- (id)channelDelegate;
- (void)setChannelDelegate:;
@end
