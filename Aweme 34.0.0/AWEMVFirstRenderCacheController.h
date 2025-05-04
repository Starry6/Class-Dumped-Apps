@interface AWEMVFirstRenderCacheController : AWEDCFeedBaseController
@property (nonatomic) BOOL isFirstFetchingData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onFetchListDataStartWithReason:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)setIsFirstFetchingData:;
- (BOOL)isFirstFetchingData;
@end
