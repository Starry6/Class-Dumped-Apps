@interface AWEShareAwemePrecheckStage : AWEShareBaseStage
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEShareAwemeInfoModel awemeInfo;
- (id)aweme;
- (id)awemeInfo;
- (BOOL)prepareBeforeRun;
- (BOOL)precheckAwemeControl;
- (BOOL)precheckAwemeStatus;
- (BOOL)precheckNonNativeADXAd;
- (void)p_showSelfSeeNotShare;
- (void)run;
@end
