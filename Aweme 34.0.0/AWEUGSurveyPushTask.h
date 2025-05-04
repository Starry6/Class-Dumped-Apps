@interface AWEUGSurveyPushTask : NSObject
@property (nonatomic) AWEUGSurveyPushModel model;
@property (nonatomic) double timeDelay;
@property (nonatomic) BOOL skipLoginCheck;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSString surveyID;
@property (nonatomic) q state;
- (double)timeDelay;
- (void)setTimeDelay:;
- (void)surveyShowed:;
- (void)restartPushTaskIfNeeded;
- (void)setSkipLoginCheck:;
- (BOOL)checkInfoValidated;
- (BOOL)canRequestSurveyInnerPush;
- (BOOL)skipLoginCheck;
- (void)requestSurveyInnerPush;
- (void)setModel:;
- (void)setTimer:;
- (id)timer;
- (id)initWithConfig:;
- (long long)state;
- (id)model;
- (void).cxx_destruct;
- (void)timerFired:;
- (void)setState:;
- (void)stop;
- (void)setSurveyID:;
- (id)surveyID;
@end
