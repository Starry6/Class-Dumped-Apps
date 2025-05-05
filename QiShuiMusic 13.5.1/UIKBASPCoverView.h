@interface UIKBASPCoverView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)initCoverBackgroundViewWithFrame:isRightToLeft:;
- (id)initCoverViewWithFrame:isRightToLeft:withTextWidth:;
- (void)setGradientLayer:;
+ (id)ASPCoverView:withFrame:isRightToLeft:withTextWidth:;
+ (id)ASPCoverViewColor;
@end
