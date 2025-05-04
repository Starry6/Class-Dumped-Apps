@interface AWEEntertainmenPlayletVIPMaskPresenter : AWEEntertainmentBaseMaskPresenter
@property (nonatomic) BOOL hasReportTryEnd;
@property (nonatomic) BOOL didAppearNeedReport;
- (id)trackParams;
- (BOOL)isPreviewVideo;
- (BOOL)shouldShowBlockView;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (id)playletVIPPaidPanelExtraParams;
- (BOOL)didAppearNeedReport;
- (void)setDidAppearNeedReport:;
- (BOOL)hasReportTryEnd;
- (void)setHasReportTryEnd:;
- (void)reset;
- (void)viewDidAppear;
@end
