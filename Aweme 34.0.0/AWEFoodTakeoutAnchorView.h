@interface AWEFoodTakeoutAnchorView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView titleSeparator;
@property (nonatomic) UIFont font;
@property (nonatomic) double iconWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (id)titleSeparator;
- (void)refreshUI:;
- (void)setTitleSeparator:;
- (id)initWithFrame:;
- (double)iconWidth;
- (id)iconImageView;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
