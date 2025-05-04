@interface AWEMusicStreamingImpl.ReportActionItem : NSObject
@property (nonatomic) NSString actionType;
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaMedia lunaMedia;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString queueType;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL needReportFeed;
@property (nonatomic) NSString feedRequestID;
@property (nonatomic) NSArray feedRelatedItems;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)lunaMedia;
- (void)setLunaMedia:;
- (BOOL)needReportFeed;
- (void)setNeedReportFeed:;
- (id)feedRequestID;
- (void)setFeedRequestID:;
- (id)feedRelatedItems;
- (void)setFeedRelatedItems:;
- (id)initWithMedia:sceneName:queueType:isCollected:needReportFeed:feedRequestID:feedRelatedItems:;
- (id)sceneName;
- (id)actionType;
- (void)setActionType:;
- (id)init;
- (void).cxx_destruct;
- (id)queueType;
- (void)setSceneName:;
- (void)setQueueType:;
@end
