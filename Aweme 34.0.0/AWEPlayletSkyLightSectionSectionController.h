@interface AWEPlayletSkyLightSectionSectionController : AWEBaseListSectionController
@property (nonatomic) AWEPlayletSkyLightSectionCell placeHolderCell;
@property (nonatomic) NSDictionary lynxInsertData;
@property (nonatomic) BOOL lynxViewHasShow;
@property (nonatomic) <AWEPlayletSkyLightSectionSectionDelegate> delegate;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)didSelectItemAtIndex:model:;
- (void)lynxViewUpdateInsertData:;
- (void)setPlaceHolderCell:;
- (id)lynxInsertData;
- (id)placeHolderCell;
- (void)setLynxInsertData:;
- (void)setLynxViewHasShow:;
- (BOOL)lynxViewHasShow;
- (id)init;
- (id)delegate;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
