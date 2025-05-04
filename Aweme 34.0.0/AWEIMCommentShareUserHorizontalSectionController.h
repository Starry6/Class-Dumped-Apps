@interface AWEIMCommentShareUserHorizontalSectionController : AWEBaseListSectionController
@property (nonatomic) AWEIMCommentShareUserHorizontalCollectionViewCell commentShareUserHorizontalCollectionViewCell;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)setCommentShareUserHorizontalCollectionViewCell:;
- (id)commentShareUserHorizontalCollectionViewCell;
- (Class)cellClass;
- (void).cxx_destruct;
+ (Class)sectionViewModelClass;
@end
