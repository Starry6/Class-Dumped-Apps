@interface AWEIMMessageTabContext : AWEIMComponentContext
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) IESIMTabBizTrackModel bizTrackModel;
@property (nonatomic) NSString gdLabel;
@property (nonatomic) BOOL hideStatusBar;
@property (nonatomic) q tabBarPreviousIndex;
@property (nonatomic) AWEIMSharedViewControllerInstanceRouterAction lastRouterAction;
@property (nonatomic) Q messagePageEnterTab;
- (id)gdLabel;
- (id)routerParams;
- (void)setRouterParams:;
- (void)setGdLabel:;
- (void)setLastRouterAction:;
- (id)lastRouterAction;
- (unsigned long long)messagePageEnterTab;
- (BOOL)isEnterFromMsgTab;
- (void)setTabBarPreviousIndex:;
- (void)setMessagePageEnterTab:;
- (BOOL)isHighFansAccount;
- (id)bizTrackModel;
- (void)setBizTrackModel:;
- (long long)tabBarPreviousIndex;
- (void).cxx_destruct;
- (BOOL)hideStatusBar;
- (void)setHideStatusBar:;
@end
