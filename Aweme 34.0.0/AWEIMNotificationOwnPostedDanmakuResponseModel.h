@interface AWEIMNotificationOwnPostedDanmakuResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray danmakuNoticeList;
- (id)danmakuNoticeList;
- (void)setDanmakuNoticeList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)danmakuNoticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
