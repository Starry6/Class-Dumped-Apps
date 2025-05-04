@interface AWEClassroomModel.ClassroomCellModel : MTLModel
@property (nonatomic) q cellType;
@property (nonatomic) q cellId;
@property (nonatomic) _TtC17AWEClassroomModel18ClassroomItemModel item;
@property (nonatomic) _TtC17AWEClassroomModel20ClassroomLessonModel lesson;
@property (nonatomic) _TtC17AWEClassroomModel24ClassroomLessonUnitModel lessonUnit;
@property (nonatomic) _TtC17AWEClassroomModel19ClassroomBlockModel block;
- (void)setCellId:;
- (id)lesson;
- (void)setLesson:;
- (id)lessonUnit;
- (void)setLessonUnit:;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)cellType;
- (void)setCellType:;
- (void)setItem:;
- (id)item;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (long long)cellId;
- (id)initWithCoder:;
+ (id)itemJSONTransformer;
+ (id)lessonJSONTransformer;
+ (id)lessonUnitJSONTransformer;
+ (id)blockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
