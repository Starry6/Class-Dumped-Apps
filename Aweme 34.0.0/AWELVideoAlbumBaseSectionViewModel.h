@interface AWELVideoAlbumBaseSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSArray albumList;
@property (nonatomic) NSDictionary logPassback;
- (id)logPassback;
- (void)setLogPassback:;
- (void)fetchSectionData;
- (void)setAlbumList:;
- (BOOL)needShowHotSection;
- (void).cxx_destruct;
- (id)albumList;
@end
