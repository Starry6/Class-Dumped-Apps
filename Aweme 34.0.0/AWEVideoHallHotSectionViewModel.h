@interface AWEVideoHallHotSectionViewModel : AWELVideoAlbumBaseSectionViewModel
@property (nonatomic) AWEVideoHallBlockInfo block;
@property (nonatomic) NSString headerTitle;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)headerTitle;
- (id)block;
- (void)setBlock:;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
@end
