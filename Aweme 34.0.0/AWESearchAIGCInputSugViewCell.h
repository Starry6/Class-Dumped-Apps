@interface AWESearchAIGCInputSugViewCell : UITableViewCell
@property (nonatomic) AWESearchAIGCInputSugViewCellViewModel viewModel;
@property (nonatomic) UILabel sugTitleLabel;
@property (nonatomic) UIButton sugActionButton;
@property (nonatomic) UIView bottomSepView;
- (id)bottomSepView;
- (void)setBottomSepView:;
- (void)configUIWithViewModel:;
- (id)sugActionButton;
- (id)sugTitleLabel;
- (void)setSugTitleLabel:;
- (void)setSugActionButton:;
- (id)viewModel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setViewModel:;
- (void).cxx_destruct;
+ (id)identifier;
@end
