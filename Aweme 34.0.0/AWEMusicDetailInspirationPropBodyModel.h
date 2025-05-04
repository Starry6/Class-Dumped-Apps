@interface AWEMusicDetailInspirationPropBodyModel : AWEBaseApiModel
@property (nonatomic) NSString propID;
@property (nonatomic) AWENewFaceStickerModel propInfo;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL hasMore;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)propInfo;
- (void)setPropInfo:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)propID;
- (void)setPropID:;
+ (id)awemeListJSONTransformer;
+ (id)propInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
