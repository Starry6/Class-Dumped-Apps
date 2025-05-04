@interface AWEHPTabViewModelManager : NSObject
@property (nonatomic) AWEFeedChannelManager channelManager;
@property (nonatomic) <AWEHPTopBarCommonAdapterFactory> adapterFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getTopTabLandTabIndex;
- (id)getDefaultLandChannelWithManager:swithConfig:;
- (void)reloadWithConfig:detail:;
- (void)p_reloadWithConfig:detail:;
- (id)adapterFactory;
- (id)getTopBarLeftEntrances;
- (void)reloadCurrentTabIDList:selectedTabID:;
- (id)p_colorWithHexString:;
- (void)setAdapterFactory:;
- (void)setChannelManager:;
- (id)channelManager;
- (void).cxx_destruct;
+ (id)p_generateHomepageChannel;
+ (id)sharedInstance;
@end
