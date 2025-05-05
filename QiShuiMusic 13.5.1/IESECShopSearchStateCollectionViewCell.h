@interface IESECShopSearchStateCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel noMoreLabel;
@property (nonatomic) UILabel noMoreAndRecommendLabel;
@property (nonatomic) UIView emptyContainerView;
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UILabel emptyLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNoMoreLabel:;
- (void)bindViewModel:;
- (id)emptyContainerView;
- (id)emptyImageView;
- (id)noMoreAndRecommendLabel;
- (id)noMoreLabel;
- (void)setEmptyContainerView:;
- (void)setEmptyImageView:;
- (void)setNoMoreAndRecommendLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUpViews;
- (id)emptyLabel;
- (void)setEmptyLabel:;
@end
