@interface AWELivingTagView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) CAGradientLayer bgLayer;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originalBounds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgLayer;
- (void)setBgLayer:;
- (id)initWithFont:edgeInsets:;
- (id)initWithText:font:edgeInsets:;
- (void)updateStartColor:endColor:;
- (id)desBoundsWithLabel:edgeInsets:;
- (id)colorLayerWithFrame:;
- (void)setLabel:;
- (id)init;
- (id)intrinsicContentSize;
- (id)edgeInsets;
- (void)setEdgeInsets:;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateText:;
- (id)originalBounds;
- (void)setOriginalBounds:;
@end
