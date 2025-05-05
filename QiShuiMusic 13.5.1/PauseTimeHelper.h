@interface PauseTimeHelper : NSObject
@property (nonatomic) double pauseTime;
@property (nonatomic) LynxUI ui;
- (void)recordPauseTime;
- (double)getPauseDuration;
- (id)initWithUI:;
- (double)pauseTime;
- (void).cxx_destruct;
- (id)ui;
- (void)setPauseTime:;
- (void)setUi:;
@end
