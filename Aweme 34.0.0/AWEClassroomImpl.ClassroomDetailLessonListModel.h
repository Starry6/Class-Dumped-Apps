@interface AWEClassroomImpl.ClassroomDetailLessonListModel : MTLModel
@property (nonatomic) NSArray data;
@property (nonatomic) NSString snapshotId;
@property (nonatomic) _TtC17AWEClassroomModel20ClassroomCursorModel nextCursor;
@property (nonatomic) _TtC17AWEClassroomModel20ClassroomCursorModel prevCursor;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)prevCursor;
- (void)setPrevCursor:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:;
- (void)setSnapshotId:;
- (id)snapshotId;
+ (id)prevCursorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
+ (id)nextCursorJSONTransformer;
@end
