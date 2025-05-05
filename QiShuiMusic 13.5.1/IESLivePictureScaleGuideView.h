@interface IESLivePictureScaleGuideView : UIView
@property (nonatomic) IESLiveAnimatedImageView guideImageView;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) NSTimer timer;
- (id)guideImageView;
- (id)guideLabel;
- (void)setGuideImageView:;
- (void)setGuideLabel:;
- (void)showGuideWithDuration:;
- (void)layoutViews;
- (void)dismiss;
- (id)init;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setupUI;
@end
