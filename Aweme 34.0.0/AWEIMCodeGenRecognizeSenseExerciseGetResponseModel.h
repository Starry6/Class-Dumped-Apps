@interface AWEIMCodeGenRecognizeSenseExerciseGetResponseModel : AWEBaseDataModel
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWEIMCodeGenRecognizeSenseExerciseInfoModel recognizeSenseExerciseInfoModel;
@property (nonatomic) q recognizeVisitUserType;
@property (nonatomic) q exerciseStatus;
@property (nonatomic) NSInteger exerciseAnswerCnt;
- (id)statusMsg;
- (void)setStatusMsg:;
- (long long)exerciseStatus;
- (int)exerciseAnswerCnt;
- (long long)recognizeVisitUserType;
- (void)setRecognizeVisitUserType:;
- (void)setExerciseStatus:;
- (void)setExerciseAnswerCnt:;
- (id)recognizeSenseExerciseInfoModel;
- (void)setRecognizeSenseExerciseInfoModel:;
- (int)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
