@interface AWEAwemeLongPressDislikeSectionController : AWEBaseListSectionController
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? buttonClickedTrackBlock;
@property (nonatomic) @? addDismissHandlerBlock;
- (void)configCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (id)buttonClickedTrackBlock;
- (void)setButtonClickedTrackBlock:;
- (id)addDismissHandlerBlock;
- (void)setAddDismissHandlerBlock:;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
- (Class)headerViewClass;
+ (Class)sectionViewModelClass;
@end
