@interface AWECommonSurveyRecorder : NSObject
@property (nonatomic) NSMutableDictionary surveyRecordDict;
- (id)surveyRecordDict;
- (BOOL)hasRecorded:;
- (void)setSurveyRecordDict:;
- (void)addRecord:;
- (void).cxx_destruct;
@end
