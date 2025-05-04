@interface AWETabContentSectionController : AWEBaseListSectionController
@property (nonatomic) <AWETabContentSectionControllerDelegate> delegate;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)delegate;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (Class)sectionViewModelClass;
@end
