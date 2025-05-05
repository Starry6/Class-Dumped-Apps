@interface IESThirdPartyResponseModel : MTLModel
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray stickerList;
@property (nonatomic) NSString searchTips;
@property (nonatomic) IESThirdPartyResponseModel gifsResponseModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString requestID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerList:;
- (void)appendAndUpdateDataWithResponseModel:;
- (id)gifsResponseModel;
- (id)searchTips;
- (id)stickerList;
- (long long)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (id)title;
- (id)requestID;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setRequestID:;
+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
