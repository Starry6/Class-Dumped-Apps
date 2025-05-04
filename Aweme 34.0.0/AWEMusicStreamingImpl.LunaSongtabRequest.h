@interface AWEMusicStreamingImpl.LunaSongtabRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSArray playedMedia;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) NSString feedMode;
@property (nonatomic) BOOL withClientCache;
@property (nonatomic) q didFirstUseTime;
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaFeedExtra feedExtra;
- (id)playedMedia;
- (void)setPlayedMedia:;
- (BOOL)isFirstRequest;
- (void)setIsFirstRequest:;
- (id)feedMode;
- (void)setFeedMode:;
- (BOOL)withClientCache;
- (void)setWithClientCache:;
- (long long)didFirstUseTime;
- (void)setDidFirstUseTime:;
- (void)setFeedExtra:;
- (Class)responseModelClass;
- (id)feedExtra;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
