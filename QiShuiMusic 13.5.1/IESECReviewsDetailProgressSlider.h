@interface IESECReviewsDetailProgressSlider : UIControl
@property (nonatomic) double value;
@property (nonatomic) BOOL activated;
@property (nonatomic) {UIEdgeInsets=dddd} responseAreaInsets;
- (id)initWithConfigurationForNormal:configurationForActivated:;
- (id)responseAreaInsets;
- (void)setResponseAreaInsets:;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)handleGesture:;
- (BOOL)isActivated;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setActivated:;
- (double)value;
- (void)setupSubviews;
+ (id)sliderWithConfigurationForNormal:configurationForActivated:;
@end
