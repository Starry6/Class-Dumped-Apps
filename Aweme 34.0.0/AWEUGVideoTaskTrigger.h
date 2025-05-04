@interface AWEUGVideoTaskTrigger : NSObject
@property (nonatomic) <AWEUGCampaignTaskEvadeVideoProtocol> videoEvade;
@property (nonatomic) AWECampaignWatchTaskModel taskModel;
@property (nonatomic) AWEAwemeModel currentAwemeModel;
@property (nonatomic) <AWEUGTaskTriggerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAwemeModel;
- (id)taskModel;
- (void)setTaskModel:;
- (void)setCurrentAwemeModel:;
- (void)pauseTaskTimerWithAweme:playStatus:scene:;
- (void)startTaskTimerWithAweme:playStatus:scene:;
- (void)updateCurrentAwemeModel:playStatus:;
- (BOOL)canTriggerCountDownForInfo:;
- (id)triggerReasonForInfo:;
- (void)setVideoEvade:;
- (id)videoEvade;
- (BOOL)shouldPauseForModel:;
- (id)delegate;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupObserver;
@end
