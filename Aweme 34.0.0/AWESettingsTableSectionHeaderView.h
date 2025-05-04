@interface AWESettingsTableSectionHeaderView : UITableViewHeaderFooterView
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) AWESettingSectionModel sectionModel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL shouldShowSeperationLine;
- (void)setUseCardUIStyle:;
- (BOOL)useCardUIStyle;
- (void)setShouldShowSeperationLine:;
- (BOOL)shouldShowSeperationLine;
- (id)sectionModel;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setSectionModel:;
- (void)disableUserInteraction;
+ (id)identifier;
@end
