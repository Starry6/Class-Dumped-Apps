@interface AWEClassroomModel.ClassroomLessonUnitModel : MTLModel
@property (nonatomic) NSString unitId;
@property (nonatomic) NSString title;
- (id)unitId;
- (void)setUnitId:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
