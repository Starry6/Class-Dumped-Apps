@interface IESArtistStickerResponseModel : MTLModel
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString extra;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray stickerList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerList;
- (long long)cursor;
- (id)extra;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)subTitle;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
