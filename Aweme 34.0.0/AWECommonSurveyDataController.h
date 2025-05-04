@interface AWECommonSurveyDataController : NSObject
@property (nonatomic) AWEQuestionnaireResponse questionnaireResponse;
@property (nonatomic) <AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (nonatomic) NSDictionary extraInfo;
- (id)frequencyControl;
- (void)setFrequencyControl:;
- (void)requestSurveyWithParams:completion:;
- (void)setQuestionnaireResponse:;
- (id)initWithFrequencyControl:extraInfo:;
- (void)initialFetchWithParams:completion:;
- (id)questionnaireResponse;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
