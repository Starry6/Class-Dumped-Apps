@interface AWEWatchVideoLaterResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray invalidItemIDs;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber listNum;
@property (nonatomic) AWEWatchLaterDiversionInfo watchLaterDiversionInfo;
- (id)listNum;
- (void)setListNum:;
- (id)invalidItemIDs;
- (void)setInvalidItemIDs:;
- (id)watchLaterDiversionInfo;
- (void)setWatchLaterDiversionInfo:;
- (id)cursor;
- (id)items;
- (void)setItems:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
