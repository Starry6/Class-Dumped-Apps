@interface SFCreditCardCollectionViewCell : UICollectionViewCell
@property (nonatomic) WBSCreditCardData cardData;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)cardData;
- (void)setCardData:;
- (void)configureViewWithCardData:;
+ (id)reuseIdentifier;
@end
