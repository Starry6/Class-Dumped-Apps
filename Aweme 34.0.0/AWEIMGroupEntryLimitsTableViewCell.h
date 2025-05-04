@interface AWEIMGroupEntryLimitsTableViewCell : UITableViewCell
@property (nonatomic) AWEIMGroupEntrySettingMenuOptionModel option;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) AWEIMCardStyleCellContainerView containerView;
@property (nonatomic) UIView lineView;
@property (nonatomic) BOOL useCardStyle;
- (void)setSelectImageView:;
- (id)selectImageView;
- (id)baseContentView;
- (void)configWithTitle:isSelected:;
- (void)setUseCardStyle:;
- (BOOL)useCardStyle;
- (void)configWithCellCornerType:shouldShowLineAtCellBottom:;
- (void)setIsSelected:;
- (id)containerView;
- (BOOL)isSelected;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setOption:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)option;
@end
