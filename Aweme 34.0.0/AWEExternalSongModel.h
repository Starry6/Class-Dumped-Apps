@interface AWEExternalSongModel : AWEBaseDataModel
@property (nonatomic) NSString externalURL;
@property (nonatomic) NSString thirdPlatformName;
@property (nonatomic) NSString thirdPlatformMusicID;
@property (nonatomic) NSString externalMusicKey;
@property (nonatomic) NSString universalLink;
@property (nonatomic) NSString deepLink;
- (void)setExternalMusicKey:;
- (void)setThirdPlatformMusicID:;
- (void)setThirdPlatformName:;
- (id)thirdPlatformName;
- (id)externalMusicKey;
- (id)thirdPlatformMusicID;
- (void).cxx_destruct;
- (void)setUniversalLink:;
- (id)deepLink;
- (void)setDeepLink:;
- (id)externalURL;
- (id)universalLink;
- (void)setExternalURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
