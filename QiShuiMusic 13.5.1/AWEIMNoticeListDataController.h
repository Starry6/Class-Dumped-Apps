@interface AWEIMNoticeListDataController : IESIMListDataController
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL needSort;
- (BOOL)needSort;
- (void)setNeedSort:;
- (void)setHasMore:;
- (BOOL)hasMore;
@end
