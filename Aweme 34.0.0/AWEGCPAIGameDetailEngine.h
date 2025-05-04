@interface AWEGCPAIGameDetailEngine : NSObject
@property (nonatomic) <IESGCPUserService> userService;
- (id)userService;
- (void)registerPitayaAppLogRunEvent;
- (id)packageTaskParamsWithUserProfile:awemeModel:enterFrom:;
- (void)runPitayaTaskWithParams:isPassiveTrigger:callback:;
- (BOOL)inferenceSuccessWithOutput:;
- (void)startPredictingWithGameID:awemeModel:enterFrom:isPassiveTrigger:callback:;
- (void)setUserService:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
