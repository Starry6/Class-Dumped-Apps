@interface IESECWinOrderCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESECWinOrderButton orderButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOrderButton:;
- (id)orderButton;
- (void)updateWithObject:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
