@interface AWEIMDYNotificationGroupDataController : IESIMListDataController
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray noticeGroupArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithNoticeGroupArray:;
- (void)monitorInfoWithResponse:error:;
- (id)noticeGroupArray;
- (id)p_getParams;
- (void)refreshDataWithCompletion:;
- (void)requestAsyncNoticesForGroups:onComplete:;
- (void)setNoticeGroupArray:;
- (void)clearCache;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
@end
