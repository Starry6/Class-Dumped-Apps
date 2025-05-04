@interface AWEButtonSurveyViewModel : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isReporting;
@property (nonatomic) BOOL isReportingShow;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (BOOL)isReporting;
- (void)trackSurveyClick:optionInfo:extraInfo:;
- (void)reportOption:optionInfo:completion:;
- (void)trackSurveyShow:extraInfo:;
- (void)setIsReporting:;
- (BOOL)isReportingShow;
- (void)setIsReportingShow:;
- (void)reportForFrequencyControl:eventName:completion:;
- (void)reportForFeelGoodShow:completion:;
@end
