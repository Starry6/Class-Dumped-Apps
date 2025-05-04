@interface AWEAwemeLongPressDuetSectionController : AWEBaseListSectionController
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? buttonClickedTrackBlock;
@property (nonatomic) @? addDismissHandlerBlock;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)aAWEPadModuleAdapter;
- (void)didSelectItemAtIndex:model:;
- (id)buttonClickedTrackBlock;
- (void)setButtonClickedTrackBlock:;
- (id)addDismissHandlerBlock;
- (void)setAddDismissHandlerBlock:;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;
@end
