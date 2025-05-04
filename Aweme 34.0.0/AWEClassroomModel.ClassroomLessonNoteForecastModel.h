@interface AWEClassroomModel.ClassroomLessonNoteForecastModel : MTLModel
@property (nonatomic) q offset;
@property (nonatomic) q numNotes;
@property (nonatomic) q numUsers;
@property (nonatomic) _TtC17AWEClassroomModel19ClassroomRangeModel segmentOffset;
- (long long)numNotes;
- (void)setNumNotes:;
- (id)segmentOffset;
- (void)setSegmentOffset:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setOffset:;
- (long long)offset;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)numUsers;
- (void)setNumUsers:;
+ (id)JSONKeyPathsByPropertyKey;
@end
