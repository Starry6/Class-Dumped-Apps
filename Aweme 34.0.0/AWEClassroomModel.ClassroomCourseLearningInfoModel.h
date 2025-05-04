@interface AWEClassroomModel.ClassroomCourseLearningInfoModel : MTLModel
@property (nonatomic) _TtC17AWEClassroomModel20ClassroomLessonModel learningLesson;
- (id)learningLesson;
- (void)setLearningLesson:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)learningLessonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
