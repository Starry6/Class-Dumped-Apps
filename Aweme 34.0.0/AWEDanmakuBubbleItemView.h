@interface AWEDanmakuBubbleItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) BOOL needShowLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setUI;
- (void)showDiggAnimationIfNeed:;
- (void)setNeedShowLabel:;
- (BOOL)needShowLabel;
- (id)initWithImage:descText:width:needShowLabel:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
+ (double)descLabelHeight;
+ (id)descLabelFont;
+ (double)edgeTopMargin;
+ (double)viewMargin;
@end
