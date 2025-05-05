@interface IESLiveSaaSPanelWebViewConfig : IESLiveSaaSWebViewConfig
@property (nonatomic) BOOL forceFixContent;
@property (nonatomic) BOOL allowPullToClose;
@property (nonatomic) BOOL indicatorNotShow;
@property (nonatomic) double pullDownHeight;
@property (nonatomic) Q indicatorColorMode;
@property (nonatomic) BOOL allowShare;
@property (nonatomic) BOOL showBackBtn;
@property (nonatomic) BOOL useHost;
- (void)setShowBackBtn:;
- (BOOL)forceFixContent;
- (BOOL)useHost;
- (BOOL)allowPullToClose;
- (BOOL)allowShare;
- (unsigned long long)indicatorColorMode;
- (BOOL)indicatorNotShow;
- (double)pullDownHeight;
- (void)setAllowPullToClose:;
- (void)setAllowShare:;
- (void)setForceFixContent:;
- (void)setIndicatorColorMode:;
- (void)setIndicatorNotShow:;
- (void)setPullDownHeight:;
- (void)setUseHost:;
- (BOOL)showBackBtn;
- (id)init;
@end
