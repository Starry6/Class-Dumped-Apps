@interface AWEEntertainmenRewardMaskPresenter : AWEEntertainmentBaseMaskPresenter
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
- (void)trackButtonShowOnce;
- (BOOL)hasReportTryEnd;
- (void)setHasReportTryEnd:;
- (double)clickTimeStamp;
- (void)setClickTimeStamp:;
- (id)requestRewardedAdvertisingContainerParams;
- (void)reset;
@end
