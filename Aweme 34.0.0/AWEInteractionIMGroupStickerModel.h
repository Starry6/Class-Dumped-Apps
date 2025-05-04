@interface AWEInteractionIMGroupStickerModel : AWEInteractionStickerModel
@property (nonatomic) AWEInteractionIMGroupStickerInfo imGroupInfo;
- (id)imGroupInfo;
- (id)initWithCid:name:groupCreateType:;
- (BOOL)nativeSticker;
- (void).cxx_destruct;
+ (id)imGroupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
