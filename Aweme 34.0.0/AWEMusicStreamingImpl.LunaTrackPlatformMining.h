@interface AWEMusicStreamingImpl.LunaTrackPlatformMining : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString reason;
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaUserBrief user;
@property (nonatomic) _TtC21AWEMusicStreamingImpl19LunaUserArtistBrief userArtistInfo;
- (id)userArtistInfo;
- (void)setUserArtistInfo:;
- (id)user;
- (void)setUser:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setReason:;
- (void).cxx_destruct;
- (id)reason;
- (id)initWithCoder:;
+ (id)userJSONTransformer;
+ (id)userArtistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
