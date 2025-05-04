@interface AWEEcomSearchMoreButtonCardView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView effectView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)configUI;
- (id)effectView;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setEffectView:;
- (id)backgroundView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
+ (BOOL)hasMoreWithViewModel:;
@end
