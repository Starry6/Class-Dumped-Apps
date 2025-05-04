@interface AWEIMAddCustomEmoticonResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSArray succeedStickerCode;
@property (nonatomic) q createStatusCode;
- (long long)createStatusCode;
- (void)setCreateStatusCode:;
- (id)succeedStickerCode;
- (void)setSucceedStickerCode:;
- (void).cxx_destruct;
- (id)stickers;
- (void)setStickers:;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
