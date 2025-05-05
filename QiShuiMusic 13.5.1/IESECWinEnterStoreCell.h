@interface IESECWinEnterStoreCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIButton goStoreBtn;
@property (nonatomic) @? gotoStore;
- (void)goStoreAction;
- (id)goStoreBtn;
- (id)gotoStore;
- (void)setGoStoreBtn:;
- (void)setGotoStore:;
- (void)updateWithObject:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
