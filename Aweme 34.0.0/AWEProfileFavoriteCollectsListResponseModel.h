@interface AWEProfileFavoriteCollectsListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray collectsInfoData;
@property (nonatomic) NSString favoriteStatusMsg;
@property (nonatomic) NSString logid;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber fileNumber;
@property (nonatomic) NSNumber favoriteStatusCode;
- (id)logid;
- (void)setLogid:;
- (id)favoriteStatusCode;
- (void)setFileNumber:;
- (id)collectsInfoData;
- (id)fileNumber;
- (void)setCollectsInfoData:;
- (id)favoriteStatusMsg;
- (void)setFavoriteStatusMsg:;
- (void)setFavoriteStatusCode:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)collectsInfoDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
