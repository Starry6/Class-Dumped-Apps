@interface AWEMusicAudioKTVSingerModel : MTLModel
@property (nonatomic) NSNumber singerID;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) AWEURLModel avatarMedium;
@property (nonatomic) AWEURLModel avatarLarge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarThumb;
- (id)avatarMedium;
- (id)avatarLarge;
- (void)setAvatarThumb:;
- (void)setAvatarMedium:;
- (void)setAvatarLarge:;
- (id)singerID;
- (void)setSingerID:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)avatarLargeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
