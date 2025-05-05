@interface AWEIMGroupEntryLimitsPickerCell : UITableViewCell
@property (nonatomic) AWEIMGroupEntrySettingMenuModel entrySetting;
@property (nonatomic) NSDictionary groupEntryLimitDict;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)configWithEntrySetting:groupEntryLimitDict:;
- (id)entrySetting;
- (id)groupEntryLimitDict;
- (void)setEntrySetting:;
- (void)setGroupEntryLimitDict:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
