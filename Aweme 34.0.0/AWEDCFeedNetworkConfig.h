@interface AWEDCFeedNetworkConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL showNetNotConnectDirect;
@property (nonatomic) BOOL autoRefreshWhileEmptyWhenNetConnect;
@property (nonatomic) BOOL showNormalEmptyWhenPrivacyAlert;
@property (nonatomic) BOOL disableLoadMoreWhenPrivacyAlert;
- (void)setupDefaultConfig;
- (void)setShowNetNotConnectDirect:;
- (void)setAutoRefreshWhileEmptyWhenNetConnect:;
- (BOOL)showNetNotConnectDirect;
- (BOOL)autoRefreshWhileEmptyWhenNetConnect;
- (BOOL)showNormalEmptyWhenPrivacyAlert;
- (void)setShowNormalEmptyWhenPrivacyAlert:;
- (BOOL)disableLoadMoreWhenPrivacyAlert;
- (void)setDisableLoadMoreWhenPrivacyAlert:;
@end
