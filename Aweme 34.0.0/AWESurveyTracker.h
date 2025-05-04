@interface AWESurveyTracker : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)commonParams;
- (id)initWith:logExtra:;
- (void)trackLoadResult:errorCode:errorMsg:;
- (void)trackSurveyQuitWithParams:;
- (void)trackSurveyShow:errorMsg:;
- (void)trackToastShow;
- (void)trackSurveyQuit;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
