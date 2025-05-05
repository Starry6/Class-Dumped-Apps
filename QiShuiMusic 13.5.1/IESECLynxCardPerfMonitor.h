@interface IESECLynxCardPerfMonitor : NSObject
@property (nonatomic) q createTime;
@property (nonatomic) NSMutableDictionary updateFlag;
@property (nonatomic) NSString url;
@property (nonatomic) NSString sceneTag;
@property (nonatomic) BOOL disableCardMonitor;
- (BOOL)disableCardMonitor;
- (id)getSceneTagWithURL:;
- (id)getUrlQueryItem:url:;
- (id)monitorLynxCardSetup:resource:;
- (id)monitorLynxCardUpdate:updateTiming:resource:;
- (id)p_filterUpdateTiming:;
- (id)p_perfInfoWithSetupInfo:updateTiming:resource:;
- (void)p_reportLynxCardPerfInfo:;
- (id)sceneTag;
- (void)setDisableCardMonitor:;
- (void)setSceneTag:;
- (void)setUpdateFlag:;
- (id)updateFlag;
- (id)url;
- (id)init;
- (long long)createTime;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setCreateTime:;
@end
