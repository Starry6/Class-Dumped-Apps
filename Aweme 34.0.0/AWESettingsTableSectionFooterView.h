@interface AWESettingsTableSectionFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel footerNoticeLabel;
@property (nonatomic) BOOL shouldShowSeperationLine;
@property (nonatomic) AWESettingSectionModel sectionModel;
- (void)setShouldShowSeperationLine:;
- (BOOL)shouldShowSeperationLine;
- (id)footerNoticeLabel;
- (id)lineViewTextColor;
- (void)setFooterNoticeLabel:;
- (id)sectionModel;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (void)setSectionModel:;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
+ (double)footerHeightForSectionModel:;
+ (id)identifier;
@end
