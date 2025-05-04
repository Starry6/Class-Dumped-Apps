@interface AWEEcomSearchEmptyCardView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)componentClicked;
- (void)componentWillDisplay;
- (id)emptyImageView;
- (void)setEmptyImageView:;
- (void)configUI;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end
