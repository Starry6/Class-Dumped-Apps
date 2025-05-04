@interface AWEIMFacePuzzleRecognizeSenseExerciseGetResponseModel : AWEBaseApiModel
@property (nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseInfoModel recognizeSenseExerciseInfo;
@property (nonatomic) q recognizeVisitUserType;
@property (nonatomic) q exerciseStatus;
@property (nonatomic) q exerciseAnswerCnt;
@property (nonatomic) q exerciseActivityStatus;
- (id)recognizeSenseExerciseInfo;
- (long long)exerciseActivityStatus;
- (long long)exerciseStatus;
- (long long)exerciseAnswerCnt;
- (void)setRecognizeSenseExerciseInfo:;
- (void)setExerciseActivityStatus:;
- (long long)recognizeVisitUserType;
- (void)setRecognizeVisitUserType:;
- (void)setExerciseStatus:;
- (void)setExerciseAnswerCnt:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
