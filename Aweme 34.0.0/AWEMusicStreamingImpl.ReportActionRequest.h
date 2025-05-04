@interface AWEMusicStreamingImpl.ReportActionRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSArray actions;
- (Class)responseModelClass;
- (id)init;
- (id)path;
- (id)actions;
- (void).cxx_destruct;
- (void)setActions:;
- (id)params;
@end
