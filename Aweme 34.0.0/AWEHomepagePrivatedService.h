@interface AWEHomepagePrivatedService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)refreshSideBarWithBusinessID:businessScene:;
- (id)getHPTabTrackManager;
- (id)getHPBubbleManager;
- (id)getHPBadgeManager;
- (id)getHPNewBadgeManager;
- (id)getHPLottieRetryManager;
- (id)homePageBubbleFactory;
- (id)uiConfigManager;
- (id)getHambLottieConfigWithComponentID:;
- (id)tabStayTimeManager;
- (id)getMMKVWithID:;
- (id)getHPProfileSideBarManager;
- (id)createHPSideBarAmbienceObjectWithEntranceViewModel:withHostParams:;
- (void)updateHPSideBarAmbienceObjectWithEntranceViewModel:withHostParams:;
- (void)trackHPSideBarShowFailWithIdentification:withReason:;
- (BOOL)isMergeProfileSideBarEnabled;
- (id)getBottomTabConfig;
- (id)getCurrentChannelController;
- (id)getHomepageHomeItemConfig;
- (void)reloadCurrentChannelsGreyMode;
- (double)getCurrentServerTime;
- (double)getCurrentServerTimeDefaultLocalTime;
@end
