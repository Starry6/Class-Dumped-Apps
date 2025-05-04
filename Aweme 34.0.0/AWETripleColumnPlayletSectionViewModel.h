@interface AWETripleColumnPlayletSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEPlayletPageContext context;
@property (nonatomic) AWEPlayletTracker tracker;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)tracker;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
