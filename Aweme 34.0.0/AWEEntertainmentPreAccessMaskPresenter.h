@interface AWEEntertainmentPreAccessMaskPresenter : AWEEntertainmentBaseMaskPresenter
@property (nonatomic) double clickTimeStamp;
@property (nonatomic) BOOL hasReportTryEnd;
- (id)trackParams;
- (BOOL)isPreviewVideo;
- (id)initWithModel:context:;
- (BOOL)shouldShowBlockView;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (BOOL)hasReportTryEnd;
- (void)setHasReportTryEnd:;
- (double)clickTimeStamp;
- (void)setClickTimeStamp:;
@end
