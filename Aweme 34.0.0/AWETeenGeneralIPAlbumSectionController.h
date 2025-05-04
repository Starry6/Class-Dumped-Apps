@interface AWETeenGeneralIPAlbumSectionController : AWETeenGeneralBaseSectionController
@property (nonatomic) AWETeenGeneralIPAlbumCardModel model;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (BOOL)playEnable;
- (void)setModel:;
- (long long)numberOfItems;
- (id)model;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
