@interface AWEProfileExtensionModuleEditTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEProfileExtensionAreaCardModel model;
@property (nonatomic) BOOL shouldForbidSort;
- (void)__setupUI;
- (void)configWithModel:shouldForbidSort:;
- (void)setShouldForbidSort:;
- (BOOL)shouldForbidSort;
- (void)setModel:;
- (void)setEditing:animated:;
- (void)setSubtitleLabel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (void)setIconImageView:;
@end
