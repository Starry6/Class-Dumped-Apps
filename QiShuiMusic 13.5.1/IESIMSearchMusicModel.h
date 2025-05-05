@interface IESIMSearchMusicModel : IESIMBaseApiModel
@property (nonatomic) Q cardType;
@property (nonatomic) IESIMMusicModel musicModel;
@property (nonatomic) NSArray musics;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) IESIMDynamicPatchModel dynamicPatch;
- (id)dynamicPatch;
- (id)musicModel;
- (id)musics;
- (void)setDynamicPatch:;
- (void)setMusicModel:;
- (void)setMusics:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (unsigned long long)cardType;
- (void)setCardType:;
+ (id)dynamicPatchJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)musicModelJSONTransformer;
+ (id)musicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
