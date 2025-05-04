@interface AWEEntertainmenMultipleEventsMaskPresenter : AWEEntertainmentBaseMaskPresenter
@property (nonatomic) AWEEntertainmenRewardMaskPresenter rewardMaskPresenter;
@property (nonatomic) AWEEntertainmenPlayletVIPMaskPresenter playletVIPMaskPresenter;
@property (nonatomic) <AWEEntertainmentMaskDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPreviewVideo;
- (id)initWithModel:context:;
- (BOOL)shouldShowBlockView;
- (id)rewardMaskPresenter;
- (id)playletVIPMaskPresenter;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (void)setRewardMaskPresenter:;
- (void)setPlayletVIPMaskPresenter:;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
@end
