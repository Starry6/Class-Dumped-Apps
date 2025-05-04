@interface AWEHPXTabChannelTabSwitchPluginController : NSObject
@property (nonatomic) AWEHPXTabChannelManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)channelTopTabDidSelect;
- (void)channelTabBarDidSelect;
- (void)changeSelectedChannelIfNeeded;
- (void)setManager:;
- (id)manager;
- (void).cxx_destruct;
@end
