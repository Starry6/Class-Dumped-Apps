@interface AWEShareSavePanelTableViewCell : UITableViewCell
@property (nonatomic) UIView headerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel messageLabel;
@property (nonatomic) NSArray actionButtons;
@property (nonatomic) AWEShareSavePanelViewModel viewModel;
@property (nonatomic) <AWEShareSavePanelTableViewCellDelegate> delegate;
@property (nonatomic) <AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)delegate;
- (id)actionButtons;
- (void)setActionButtons:;
- (id)messageLabel;
- (id)viewModel;
- (id)headerView;
- (void)setTitleLabel:;
- (void)setMessageLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setHeaderView:;
- (void)actionButtonTapped:;
- (void)updateWithViewModel:;
@end
