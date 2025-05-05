@interface IESECWinAuthorImpressionWordCell : UICollectionViewCell
@property (nonatomic) UILabel leftQuotationMarkLabel;
@property (nonatomic) UILabel impressionWordLabel;
@property (nonatomic) UILabel impressionWordCountLabel;
@property (nonatomic) UILabel rightQuotationMarkLabel;
- (id)impressionWordCountLabel;
- (id)impressionWordLabel;
- (id)leftQuotationMarkLabel;
- (id)rightQuotationMarkLabel;
- (void)setImpressionWordCountLabel:;
- (void)setImpressionWordLabel:;
- (void)setImpressionWordWithWord:count:;
- (void)setLeftQuotationMarkLabel:;
- (void)setRightQuotationMarkLabel:;
- (void)setupWithConfig:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUpConstraints;
@end
