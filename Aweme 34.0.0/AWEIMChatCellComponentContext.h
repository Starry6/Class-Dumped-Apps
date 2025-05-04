@interface AWEIMChatCellComponentContext : AWEIMComponentContext
@property (nonatomic) <AWEIMChatCellFeatureSwitchProtocol> featureSwitch;
@property (nonatomic) Q aliasScene;
@property (nonatomic) AWEIMChatCellViewModel cellViewModel;
@property (nonatomic) BOOL enableFriendActiveSwitch;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (id)featureSwitch;
- (BOOL)enableMsgTabUIOpt;
- (void)setEnableMsgTabUIOpt:;
- (BOOL)isCompanyAccount:;
- (BOOL)enableTrackPerfMetrics;
- (void)trackPerfMetrics:compClass:invocationSelector:;
- (unsigned long long)aliasScene;
- (void)setAliasScene:;
- (void)setFeatureSwitch:;
- (BOOL)enableFriendActiveSwitch;
- (void)setEnableFriendActiveSwitch:;
- (void).cxx_destruct;
- (id)chat;
@end
