@interface AWEMusicStreamingImpl.LunaLyricContributor : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaUserBrief user;
@property (nonatomic) NSString filterReason;
- (id)filterReason;
- (void)setFilterReason:;
- (id)user;
- (void)setUser:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
