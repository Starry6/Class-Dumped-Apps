@interface AWEClassroomImpl.ClassroomDetailCourseInfoModel : MTLModel
@property (nonatomic) _TtC17AWEClassroomModel20ClassroomCourseModel course;
@property (nonatomic) NSArray serviceEntranceList;
@property (nonatomic) NSString buySchema;
@property (nonatomic) NSString epStudentUid;
@property (nonatomic) NSString epClassSchema;
@property (nonatomic) q punishmentStatus;
- (id)serviceEntranceList;
- (void)setServiceEntranceList:;
- (id)buySchema;
- (void)setBuySchema:;
- (id)epStudentUid;
- (void)setEpStudentUid:;
- (id)epClassSchema;
- (void)setEpClassSchema:;
- (long long)punishmentStatus;
- (void)setPunishmentStatus:;
- (id)course;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setCourse:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)courseJSONTransformer;
+ (id)serviceEntranceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
