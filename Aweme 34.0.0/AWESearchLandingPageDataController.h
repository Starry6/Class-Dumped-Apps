@interface AWESearchLandingPageDataController : AWEListDataController
@property (nonatomic) q limit;
@property (nonatomic) q offset;
@property (nonatomic) @ responseModel;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString alasrc;
- (id)alasrc;
- (void)fetchLandingPageData:keyword:completion:;
- (void)setAlasrc:;
- (long long)limit;
- (id)init;
- (void)setLimit:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)responseModel;
- (void)setResponseModel:;
@end
