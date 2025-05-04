@interface AWEAwemeLongPressAdAttitudeSectionController : AWEBaseListSectionController
@property (nonatomic) double height;
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
- (void)setHeight:;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (double)height;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
