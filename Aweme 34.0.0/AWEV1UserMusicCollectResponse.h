@interface AWEV1UserMusicCollectResponse : AWEBaseResponseModel
@property (nonatomic) NSArray mcListModelArray;
@property (nonatomic) NSInteger cursor;
@property (nonatomic) q hasMore;
@property (nonatomic) AWECollectDiversionModel collectDiversionModel;
@property (nonatomic) AWECollectDiversionReportModel diversionReportModel;
- (void)setMcListModelArray:;
- (void)setCollectDiversionModel:;
- (void)setDiversionReportModel:;
- (id)mcListModelArray;
- (id)collectDiversionModel;
- (id)diversionReportModel;
- (int)cursor;
- (void)setHasMore:;
- (long long)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
