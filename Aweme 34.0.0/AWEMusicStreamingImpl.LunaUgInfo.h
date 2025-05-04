@interface AWEMusicStreamingImpl.LunaUgInfo : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString interestingTrackID;
@property (nonatomic) q isNeedInsert;
@property (nonatomic) q insertTimeMs;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString subSceneName;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)subSceneName;
- (void)setSubSceneName:;
- (id)interestingTrackID;
- (void)setInterestingTrackID:;
- (long long)isNeedInsert;
- (void)setIsNeedInsert:;
- (long long)insertTimeMs;
- (void)setInsertTimeMs:;
- (id)sceneName;
- (id)init;
- (id)extra;
- (void).cxx_destruct;
- (void)setSceneName:;
@end
