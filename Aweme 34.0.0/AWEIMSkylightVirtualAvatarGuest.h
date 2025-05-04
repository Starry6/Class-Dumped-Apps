@interface AWEIMSkylightVirtualAvatarGuest : MTLModel
@property (nonatomic) AFDUserVirtualCharacterModel characterModel;
@property (nonatomic) AFDUserVirtualEmotionModel emotionModel;
@property (nonatomic) UIImage localImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEmotionModel:;
- (id)emotionModel;
- (id)characterModel;
- (void)updateIfNeededWithLoginUser:;
- (void)setCharacterModel:;
- (void).cxx_destruct;
- (id)localImage;
- (void)setLocalImage:;
+ (id)characterModelJSONTransformer;
+ (id)emotionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
