@interface AWEShadowGradientTextView : UIView
@property (nonatomic) UIView topShadowView;
@property (nonatomic) CAGradientLayer topShadowViewLayer;
@property (nonatomic) UIView bottomShadowView;
@property (nonatomic) CAGradientLayer bottomShadowViewLayer;
@property (nonatomic) BOOL showShadow;
@property (nonatomic) UITextView textView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showShadow;
- (id)topShadowView;
- (id)bottomShadowView;
- (id)topShadowViewLayer;
- (id)bottomShadowViewLayer;
- (void)setShowShadow:;
- (void)setTopShadowView:;
- (void)setTopShadowViewLayer:;
- (void)setBottomShadowView:;
- (void)setBottomShadowViewLayer:;
- (id)textView;
- (void)setTextView:;
- (id)initWithFrame:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
