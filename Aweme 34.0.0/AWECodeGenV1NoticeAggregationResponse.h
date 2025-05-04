@interface AWECodeGenV1NoticeAggregationResponse : AWEBaseResponseModel
@property (nonatomic) NSArray noticeListV2ModelArray;
@property (nonatomic) q hasMore;
@property (nonatomic) NSInteger total;
@property (nonatomic) q maxTime;
@property (nonatomic) q minTime;
- (id)noticeListV2ModelArray;
- (void)setNoticeListV2ModelArray:;
- (void)setMaxTime:;
- (void)setMinTime:;
- (long long)maxTime;
- (void)setHasMore:;
- (long long)minTime;
- (long long)hasMore;
- (void).cxx_destruct;
- (int)total;
- (void)setTotal:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
