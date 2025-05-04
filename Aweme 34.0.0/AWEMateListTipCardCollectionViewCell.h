@interface AWEMateListTipCardCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEMateListTipCardView cardView;
@property (nonatomic) @? tapCloseButtonBlock;
@property (nonatomic) @? primaryButtonBlock;
@property (nonatomic) @? tapSecondaryButtonBlock;
- (void)configTitle:subtitle:iconUrl:;
- (void)setTapCloseButtonBlock:;
- (void)setPrimaryButtonBlock:;
- (void)setTapSecondaryButtonBlock:;
- (id)primaryButtonBlock;
- (id)tapCloseButtonBlock;
- (id)tapSecondaryButtonBlock;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
@end
