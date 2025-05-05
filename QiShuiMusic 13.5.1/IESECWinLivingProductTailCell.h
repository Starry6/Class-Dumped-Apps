@interface IESECWinLivingProductTailCell : UICollectionViewCell
@property (nonatomic) UIView lookMoreView;
@property (nonatomic) UILabel lookMoreLabel;
@property (nonatomic) UILabel leftParenthesesLabel;
@property (nonatomic) UILabel productCountLabel;
@property (nonatomic) UILabel rightParenthesesLabel;
- (void)bindObject:;
- (id)leftParenthesesLabel;
- (id)lookMoreLabel;
- (id)lookMoreView;
- (id)productCountLabel;
- (id)rightParenthesesLabel;
- (void)setLeftParenthesesLabel:;
- (void)setLookMoreLabel:;
- (void)setLookMoreView:;
- (void)setProductCountLabel:;
- (void)setRightParenthesesLabel:;
- (void)updateMoreButtonText;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
