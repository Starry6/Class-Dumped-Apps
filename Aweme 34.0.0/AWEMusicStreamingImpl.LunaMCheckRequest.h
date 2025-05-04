@interface AWEMusicStreamingImpl.LunaMCheckRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSArray mediaList;
@property (nonatomic) q scene;
- (id)mediaList;
- (void)setMediaList:;
- (Class)responseModelClass;
- (void)setScene:;
- (id)init;
- (long long)scene;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
