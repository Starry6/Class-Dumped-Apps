@interface AWEInteractionStickerAssociatedSocialModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) AWEInteractionStickerSocialHashtagModel hashtagModel;
@property (nonatomic) AWEInteractionStickerSocialMentionModel mentionModel;
@property (nonatomic) AWEInteractionStickerSocialHotSpotModel hotSpotModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mentionModel;
- (id)hotSpotModel;
- (void)setHotSpotModel:;
- (void)setMentionModel:;
- (id)hashtagModel;
- (void)setHashtagModel:;
- (unsigned long long)type;
- (void)setType:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)mentionModelJSONTransformer;
+ (id)hashtagModelJSONTransformer;
+ (id)modelWithMention:;
+ (id)modelWithHashTag:;
+ (id)modelWithHotspot:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)hotSpotModelJSONTransformer;
@end
