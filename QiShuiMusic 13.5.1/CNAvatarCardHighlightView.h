@interface CNAvatarCardHighlightView : UIView
@property (nonatomic) CALayer highlightLayer;
@property (nonatomic) UIColor highlightColor;
@property (nonatomic) BOOL highlighted;
- (void)_commonInit;
- (void)setHighlightColor:;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)highlightColor;
- (BOOL)highlighted;
- (id)initWithFrame:;
- (void)setHighlighted:animated:;
- (void).cxx_destruct;
- (id)highlightLayer;
- (void)setHighlightLayer:;
@end
