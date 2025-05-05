@interface IESIMExternalMusicModel : IESIMBaseApiModel
@property (nonatomic) NSString externalMusicKey;
@property (nonatomic) NSString thirdPlatformMusicID;
@property (nonatomic) NSString thirdPlatformName;
@property (nonatomic) NSString externalURL;
@property (nonatomic) NSString universalLink;
@property (nonatomic) NSString deepLink;
- (id)externalMusicKey;
- (void)setExternalMusicKey:;
- (void)setThirdPlatformMusicID:;
- (void)setThirdPlatformName:;
- (id)thirdPlatformMusicID;
- (id)thirdPlatformName;
- (void).cxx_destruct;
- (void)setUniversalLink:;
- (id)deepLink;
- (void)setDeepLink:;
- (id)externalURL;
- (id)universalLink;
- (void)setExternalURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
