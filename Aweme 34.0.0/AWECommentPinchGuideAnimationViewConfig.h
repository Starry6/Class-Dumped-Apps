@interface AWECommentPinchGuideAnimationViewConfig : NSObject
@property (nonatomic) {UIEdgeInsets=dddd} layoutInset;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double lottieViewSize;
@property (nonatomic) double lottieToHintInset;
@property (nonatomic) NSString hintLabelText;
@property (nonatomic) double hintLabelFontSize;
- (void)setLayoutInset:;
- (double)lottieToHintInset;
- (double)lottieViewSize;
- (id)layoutInset;
- (id)hintLabelText;
- (double)hintLabelFontSize;
- (void)setLottieViewSize:;
- (void)setLottieToHintInset:;
- (void)setHintLabelFontSize:;
- (void)setHintLabelText:;
- (id)init;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
@end
