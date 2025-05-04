@interface AWEFeedQuickFlashTagCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView tagIconView;
@property (nonatomic) UILabel tagTitleLabel;
- (void)configWithModel:;
- (id)tagIconView;
- (void)setTagIconView:;
- (id)tagTitleLabel;
- (void)setTagTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
@end
