@interface AWEHotSearchNewResponseDataModel : AWEBaseApiModel
@property (nonatomic) NSArray hotSearchList;
@property (nonatomic) NSArray recommendList;
@property (nonatomic) NSString activeTime;
@property (nonatomic) AWEShareModel shareInfo;
@property (nonatomic) NSArray risingHotSpotList;
@property (nonatomic) NSString trendingDescriptionHeader;
@property (nonatomic) NSString cityCodeOnNearbyBoard;
- (id)recommendList;
- (void)setRecommendList:;
- (id)cityCodeOnNearbyBoard;
- (void)setRisingHotSpotList:;
- (id)risingHotSpotList;
- (id)hotSearchList;
- (void)setCityCodeOnNearbyBoard:;
- (void)setHotSearchList:;
- (id)trendingDescriptionHeader;
- (void)setTrendingDescriptionHeader:;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:;
- (id)activeTime;
- (void)setActiveTime:;
+ (id)hotSearchListJSONTransformer;
+ (id)risingHotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)recommendListJSONTransformer;
@end
