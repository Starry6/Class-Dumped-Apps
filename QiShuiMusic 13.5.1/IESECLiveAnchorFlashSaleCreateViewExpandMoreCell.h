@interface IESECLiveAnchorFlashSaleCreateViewExpandMoreCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIButton button;
@property (nonatomic) BOOL expand;
@property (nonatomic) <IESECLiveAnchorFlashSaleCreateViewExpandMoreCellDelegate> delegate;
- (void)p_buttonDidTapped:;
- (void)setExpand:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)icon;
- (id)button;
- (id)delegate;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setButton:;
- (id)titleLabel;
- (BOOL)expand;
@end
