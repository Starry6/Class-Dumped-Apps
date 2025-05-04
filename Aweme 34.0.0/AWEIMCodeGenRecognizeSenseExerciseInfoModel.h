@interface AWEIMCodeGenRecognizeSenseExerciseInfoModel : AWEBaseDataModel
@property (nonatomic) NSString secExerciseId;
@property (nonatomic) NSString secExerciseUserId;
@property (nonatomic) AWEIMCodeGenPicModel mainPicModel;
@property (nonatomic) NSDictionary senseMap;
- (void)setSecExerciseUserId:;
- (void)setSecExerciseId:;
- (id)senseMap;
- (id)secExerciseId;
- (id)secExerciseUserId;
- (void)setSenseMap:;
- (id)mainPicModel;
- (void)setMainPicModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
