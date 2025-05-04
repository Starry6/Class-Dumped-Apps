@interface AWEHotSpotTodayVideosResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSDictionary intervenedInfo;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSDictionary extraInfoDict;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (id)intervenedInfo;
- (void)setIntervenedInfo:;
- (id)cursor;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
