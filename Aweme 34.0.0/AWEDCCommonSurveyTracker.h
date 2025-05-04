@interface AWEDCCommonSurveyTracker : NSObject
@property (nonatomic) NSDictionary logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (id)commonParams:;
- (void)trackShowWithModel:errorCode:errorMsg:;
- (void)trackQuitWithModel:params:;
- (void)trackLoadResult:model:errorCode:errorMsg:;
- (void)trackToastShowWithModel:params:;
- (void)trackWithEvent:model:params:;
- (id)initWithLogExtra:;
- (void)trackLoadResult:model:errorCode:errorMsg:extraInfo:;
- (void)trackInsetResult:model:errorCode:errorMsg:extraInfo:;
- (void).cxx_destruct;
@end
