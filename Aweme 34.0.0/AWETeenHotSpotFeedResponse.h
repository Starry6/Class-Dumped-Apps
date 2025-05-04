@interface AWETeenHotSpotFeedResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray hotSpotList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString version;
- (id)awemeList;
- (void)setAwemeList:;
- (id)hotSpotList;
- (void)setHotSpotList:;
- (id)cursor;
- (void)setHasMore:;
- (id)version;
- (BOOL)hasMore;
- (void)setCursor:;
- (void)setVersion:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
