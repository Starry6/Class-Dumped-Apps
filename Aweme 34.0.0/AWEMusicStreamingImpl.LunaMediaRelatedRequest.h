@interface AWEMusicStreamingImpl.LunaMediaRelatedRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSArray playedMedia;
@property (nonatomic) q reqCount;
@property (nonatomic) q firstReqTime;
- (id)mediaList;
- (void)setMediaList:;
- (long long)reqCount;
- (void)setReqCount:;
- (long long)firstReqTime;
- (void)setFirstReqTime:;
- (id)playedMedia;
- (void)setPlayedMedia:;
- (Class)responseModelClass;
- (id)sceneName;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)params;
- (void)setSceneName:;
@end
