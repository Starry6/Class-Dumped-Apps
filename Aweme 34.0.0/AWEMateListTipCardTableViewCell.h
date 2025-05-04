@interface AWEMateListTipCardTableViewCell : UITableViewCell
@property (nonatomic) AWEMateListTipCardView cardView;
@property (nonatomic) @? tapCloseButtonBlock;
@property (nonatomic) @? primaryButtonBlock;
@property (nonatomic) @? tapSecondaryButtonBlock;
- (void)p_setupUI;
- (void)configTitle:subtitle:iconUrl:;
- (void)setTapCloseButtonBlock:;
- (void)setPrimaryButtonBlock:;
- (void)setTapSecondaryButtonBlock:;
- (id)primaryButtonBlock;
- (id)tapCloseButtonBlock;
- (id)tapSecondaryButtonBlock;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
