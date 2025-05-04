@interface AWEInteractionEditTagStickerModel : AWEInteractionStickerModel
@property (nonatomic) NSString actualSize;
@property (nonatomic) AWEInteractionEditTagStickerInfoModel editTagInfo;
- (id)actualSize;
- (void)setActualSize:;
- (id)editTagInfo;
- (BOOL)nativeSticker;
- (void)setEditTagInfo:;
- (void).cxx_destruct;
+ (id)editTagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
