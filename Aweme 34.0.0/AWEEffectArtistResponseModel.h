@interface AWEEffectArtistResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber cursorFrom;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray effectList;
- (id)cursorFrom;
- (void)setCursorFrom:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)effectList;
- (void)setEffectList:;
+ (id)hasMoreJSONTransformer;
+ (id)effectListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
