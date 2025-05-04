@interface AWEPrivacyOneKeyGuardHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWESettingSectionModel sectionModel;
@property (nonatomic) BOOL isFooter;
- (void)setIsFooter:;
- (BOOL)isFooter;
- (id)sectionModel;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setSectionModel:;
+ (id)identifier;
@end
