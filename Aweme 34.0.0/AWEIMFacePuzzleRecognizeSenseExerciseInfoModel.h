@interface AWEIMFacePuzzleRecognizeSenseExerciseInfoModel : AWEBaseApiModel
@property (nonatomic) NSString secExerciseId;
@property (nonatomic) NSString secExerciseUserId;
@property (nonatomic) AWEIMFacePuzzlePicModel mainPic;
@property (nonatomic) AWEIMFacePuzzlePicModel sensePic;
@property (nonatomic) NSDictionary senseMap;
- (void)setSecExerciseUserId:;
- (void)setSecExerciseId:;
- (id)mainPic;
- (id)sensePic;
- (id)senseMap;
- (id)secExerciseId;
- (id)secExerciseUserId;
- (void)setMainPic:;
- (void)setSensePic:;
- (void)setSenseMap:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
