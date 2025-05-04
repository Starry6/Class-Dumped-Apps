@interface AWEIMSkylightVirtualAvatarHost : AWEIMSkylightVirtualAvatarGuest
@property (nonatomic) BOOL hasEntrance;
@property (nonatomic) NSString entranceURLStr;
@property (nonatomic) AFDUserVirtualAnimationAvatarModel virtualAvatarWithoutEmotion;
- (BOOL)hasEntrance;
- (void)setHasEntrance:;
- (id)entranceURLStr;
- (void)setEntranceURLStr:;
- (id)virtualAvatarWithoutEmotion;
- (void)setVirtualAvatarWithoutEmotion:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
