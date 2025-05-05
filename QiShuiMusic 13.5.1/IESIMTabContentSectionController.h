@interface IESIMTabContentSectionController : IESIMBaseListSectionController
@property (nonatomic) <IESIMTabContentSectionControllerDelegate> delegate;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (Class)cellClass;
+ (Class)sectionViewModelClass;
@end
