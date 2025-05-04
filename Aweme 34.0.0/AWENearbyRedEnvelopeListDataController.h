@interface AWENearbyRedEnvelopeListDataController : AWEListDataController
@property (nonatomic) q nextOffset;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithFilteredCompletion:;
- (void)setNextOffset:;
- (void)fetchWithCount:type:completion:;
- (void)refreshWithCompletion:;
- (long long)nextOffset;
@end
