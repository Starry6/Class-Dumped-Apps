@interface AWEMusicStreamingImpl.LunaArtistBrief : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString name;
@property (nonatomic) _TtC21AWEMusicStreamingImpl11LunaURLInfo avatar;
- (id)initWithDictionary:error:;
- (id)init;
- (id)id;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
- (void)setId:;
- (id)avatar;
- (void)setAvatar:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
