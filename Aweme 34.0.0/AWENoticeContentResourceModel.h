@interface AWENoticeContentResourceModel : AWEBaseApiModel
@property (nonatomic) AWEIMStickerModel sticker;
@property (nonatomic) NSArray imageList;
- (void)setImageList:;
- (void).cxx_destruct;
- (id)sticker;
- (void)setSticker:;
- (id)imageList;
+ (id)imageListJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
