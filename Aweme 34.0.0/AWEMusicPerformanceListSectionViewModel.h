@interface AWEMusicPerformanceListSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSString userId;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)didClickPerformanceAtIndex:;
- (void)willDisplayPerformanceAtIndex:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
@end
