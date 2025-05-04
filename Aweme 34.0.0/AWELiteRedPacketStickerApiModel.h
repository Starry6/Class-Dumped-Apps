@interface AWELiteRedPacketStickerApiModel : AWELiteRedPacketBaseApiModel
@property (nonatomic) AWELiteRedPacketStickerInfo sticker;
- (void).cxx_destruct;
- (id)sticker;
- (void)setSticker:;
+ (id)redPacketJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
