@interface IESInfoStickerResponseModel : MTLModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray stickerList;
@property (nonatomic) NSString title;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStickerList:;
- (void)appendAndUpdateDataWithResponseModel:;
- (id)stickerList;
- (id)cursor;
- (id)extra;
- (void)setHasMore:;
- (void)setCursor:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
