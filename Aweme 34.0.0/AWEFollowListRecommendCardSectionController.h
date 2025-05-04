@interface AWEFollowListRecommendCardSectionController : AWEBaseListSectionController
@property (nonatomic) AWEFollowListRecommendCardHeader header;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)configSupplementaryHeaderView:;
- (void)didTapDislikeButtonOnCell:dataSourceIndex:;
- (void)didTapFollowButtonOnCell:dataSourceIndex:completion:;
- (void)didTapCancelButtonOnHeader;
- (id)header;
- (void).cxx_destruct;
- (void)setHeader:;
- (id)inset;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
