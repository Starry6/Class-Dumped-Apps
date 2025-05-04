@interface AWESearchDiscussInGeneralCachalotDataController : AWEGeneralCachalotDataController
@property (nonatomic) @ multiTabManagerDelegate;
- (BOOL)enableNewPreRequestWithInitialParams:context:;
- (BOOL)enablePreRequestWithInitialParams:context:;
- (long long)requestDataCount;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:;
- (void)loadMoreResponse:;
- (id)discussRequestParams;
- (id)multiTabManagerDelegate;
- (void)setMultiTabManagerDelegate:;
- (void).cxx_destruct;
+ (BOOL)enableUseNewPreRequestTagWithSearchSource:;
@end
