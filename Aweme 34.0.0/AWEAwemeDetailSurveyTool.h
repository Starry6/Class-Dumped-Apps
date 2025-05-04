@interface AWEAwemeDetailSurveyTool : NSObject
@property (nonatomic) NSMutableDictionary surveyRecordDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)surveyRecordDict;
- (void)setSurveyRecordDict:;
- (BOOL)hasRecordSurveyForModel:;
- (void)addSurveyRecord:;
- (void).cxx_destruct;
+ (BOOL)isValidTypeForSurveyInCommonDC:;
+ (void)unregisterMessageWithReferString:object:previousPage:;
+ (void)registerMessageWithReferString:object:previousPage:;
+ (BOOL)isValidFeelGoodInDetail:;
+ (BOOL)isInSurveyWhiteList:;
+ (void)cleanQuestionnaireResponseWithReferString:previousPage:;
+ (id)currQuestionnaireResponseWithReferString:previousPage:;
+ (long long)currentQuestionnaireScene:previousPage:;
+ (BOOL)isAfterInteractionScence:;
+ (BOOL)enableSurveyInAwemeDetail;
+ (BOOL)isValidFeelGoodInDoubleColumn:;
+ (BOOL)isValidFeelGoodInMediumVideoChannel:;
+ (id)sharedInstance;
@end
