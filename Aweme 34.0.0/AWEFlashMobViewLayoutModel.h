@interface AWEFlashMobViewLayoutModel : MTLModel
@property (nonatomic) AWEFlashMobFlashAvatarsConfig flashAvatarsConfig;
@property (nonatomic) AWEFlashMobFlashJoinBtnConfig flashJoinBtnConfig;
@property (nonatomic) AWEFlashMobFlashTitleConfig flashTitleConfig;
@property (nonatomic) AWEFlashMobFlashMobStickerConfig flashMobStickerConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)flashTitleConfig;
- (id)flashAvatarsConfig;
- (id)flashJoinBtnConfig;
- (id)flashMobStickerConfig;
- (void)setFlashAvatarsConfig:;
- (void)setFlashJoinBtnConfig:;
- (void)setFlashTitleConfig:;
- (void)setFlashMobStickerConfig:;
- (void).cxx_destruct;
+ (id)flashAvatarsConfigJSONTransformer;
+ (id)flashJoinBtnConfigJSONTransformer;
+ (id)flashTitleConfigJSONTransformer;
+ (id)flashMobStickerConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
