@interface AWEHotWordsRecommendCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView maskCoverView;
@property (nonatomic) UILabel descLabel;
- (void)hideMaskView;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)configureUI;
- (void)showMaskView;
- (id)maskCoverView;
- (void)setMaskCoverView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
