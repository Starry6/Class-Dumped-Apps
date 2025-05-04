@interface AWECodeGenV1DanmakuListSelfNoticeResponse : AWEBaseResponseModel
@property (nonatomic) NSArray danmakuNoticeListModelArray;
@property (nonatomic) BOOL hasMore;
- (id)danmakuNoticeListModelArray;
- (void)setDanmakuNoticeListModelArray:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
