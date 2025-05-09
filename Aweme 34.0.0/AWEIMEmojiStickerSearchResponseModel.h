@interface AWEIMEmojiStickerSearchResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString searchId;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber nextOffset;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchId;
- (void)setSearchId:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (void)setNextOffset:;
- (id)statusCode;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)nextOffset;
- (id)stickers;
- (void)setTotalCount:;
- (void)setStickers:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
