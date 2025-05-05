@interface AWEIMGroupEntryLimitsTableViewCell : UITableViewCell
@property (nonatomic) AWEIMGroupEntrySettingMenuOptionModel option;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectImageView;
- (id)selectImageView;
- (void)configWithEntryOption:isSelected:;
- (void)setSelectImageView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setOption:;
- (void)setIsSelected:;
- (id)titleLabel;
- (void)setupUI;
- (id)option;
@end
