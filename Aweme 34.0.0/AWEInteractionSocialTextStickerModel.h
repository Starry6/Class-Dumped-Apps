@interface AWEInteractionSocialTextStickerModel : AWEInteractionStickerModel
@property (nonatomic) NSArray textSocialInfos;
- (id)textSocialInfos;
- (long long)indexFromType;
- (void)setTextSocialInfos:;
- (void).cxx_destruct;
+ (id)textSocialInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
