@interface AWEMusicDetailInspirationQuickFlashBodyModel : AWEBaseApiModel
@property (nonatomic) AWEInteractionStickerModel quickFlashStickerModel;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL hasMore;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)quickFlashStickerModel;
- (void)setQuickFlashStickerModel:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)quickFlashStickerModelJSONTransformer;
@end
