@interface AWEProfileHeaderProfileRecommendSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)trackForRelationReason;
- (id)recommendReasonShowText:needTrack:;
- (void)didTapProfileRecommendView;
- (Class)cellClass;
- (BOOL)showSeparator;
@end
