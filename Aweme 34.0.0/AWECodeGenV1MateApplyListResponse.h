@interface AWECodeGenV1MateApplyListResponse : AWEBaseResponseModel
@property (nonatomic) NSArray applicationsModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q maxTimestamp;
@property (nonatomic) q minTimestamp;
@property (nonatomic) q lastWaterline;
@property (nonatomic) NSInteger unreadTotalCount;
- (id)applicationsModelArray;
- (void)setApplicationsModelArray:;
- (long long)lastWaterline;
- (void)setLastWaterline:;
- (int)unreadTotalCount;
- (void)setUnreadTotalCount:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)maxTimestamp;
- (void)setMaxTimestamp:;
- (long long)minTimestamp;
- (void)setMinTimestamp:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
