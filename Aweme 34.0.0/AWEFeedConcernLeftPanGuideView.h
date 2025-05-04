@interface AWEFeedConcernLeftPanGuideView : UIView
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) UIImageView guideImage;
@property (nonatomic) NSString guideText;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) double arrowImageViewTop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideText;
- (void)setGuideText:;
- (double)arrowImageViewTop;
- (void)setArrowImageViewTop:;
- (void)updateFrameLayer:;
- (void)resetFrame:textIgnoreBlank:textBottomPosition:isAppear:;
- (id)maskPath:;
- (void)setupLayers;
- (id)__guideText:;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setTextLabel:;
- (id)guideImage;
- (void)setGuideImage:;
@end
