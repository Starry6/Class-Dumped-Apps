@interface IESECWinFollowBuyCell : UICollectionViewCell
@property (nonatomic) UILabel followBuyLabel;
@property (nonatomic) UIView vLineView;
@property (nonatomic) UILabel recommendLabel;
@property (nonatomic) IESECWinFollowBuyObject object;
- (id)followAttributedText:;
- (id)followBuyLabel;
- (id)recommendAttributedText:;
- (id)recommendLabel;
- (void)setFollowBuyLabel:;
- (void)setRecommendLabel:;
- (void)setVLineView:;
- (void)updateWithObject:;
- (id)vLineView;
- (void)setObject:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)object;
- (void)setupUI;
@end
