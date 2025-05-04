@interface AWEUGCountDownVideoStatusAdapter : NSObject
@property (nonatomic) Q currentPlayStatus;
@property (nonatomic) AWEAwemeModel currentAwemeModel;
@property (nonatomic) <AWEUGCountDownVideoStatusProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAwemeModel;
- (void)setCurrentAwemeModel:;
- (void)trackLogWithKey:message:;
- (void)pauseTaskTimerWithAweme:playStatus:scene:;
- (void)startTaskTimerWithAweme:playStatus:scene:;
- (void)setCurrentPlayStatus:;
- (unsigned long long)currentPlayStatus;
- (void)setVideoStatusDelegate:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
