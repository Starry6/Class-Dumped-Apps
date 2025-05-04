@interface AWEFavoriteFileVideoResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber favoriteStatusCode;
@property (nonatomic) NSString favoriteStatusMsg;
@property (nonatomic) NSString logid;
@property (nonatomic) NSArray disabledItemIds;
- (id)logid;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setLogid:;
- (id)favoriteStatusCode;
- (id)disabledItemIds;
- (void)setDisabledItemIds:;
- (id)favoriteStatusMsg;
- (void)setFavoriteStatusMsg:;
- (void)setFavoriteStatusCode:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
