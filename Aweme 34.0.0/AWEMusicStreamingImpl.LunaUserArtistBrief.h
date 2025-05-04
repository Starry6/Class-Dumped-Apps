@interface AWEMusicStreamingImpl.LunaUserArtistBrief : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q userArtistType;
@property (nonatomic) q _userArtistType;
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaUserBrief user;
@property (nonatomic) _TtC21AWEMusicStreamingImpl15LunaArtistBrief artist;
@property (nonatomic) BOOL fallback;
- (long long)userArtistType;
- (void)setUserArtistType:;
- (long long)_userArtistType;
- (id)artist;
- (id)user;
- (void)setUser:;
- (BOOL)fallback;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setArtist:;
- (void).cxx_destruct;
- (void)setFallback:;
- (id)initWithCoder:;
+ (id)userJSONTransformer;
+ (id)artistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
