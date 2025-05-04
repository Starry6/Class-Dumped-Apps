@interface AWEProfileMixCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEProfileMixViewController mixViewController;
- (void)layoutSubviews;
- (void)config:;
- (id)mixViewController;
- (void)setMixViewController:;
- (void)refresh;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)itemSizeWithCollectionView:;
+ (id)identifier;
@end
