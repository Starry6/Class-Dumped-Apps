@interface AWEClassroomModel.ClassroomLessonHistoryModel : MTLModel
@property (nonatomic) q lastPlayTime;
@property (nonatomic) q progress;
- (long long)lastPlayTime;
- (void)setLastPlayTime:;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)progress;
- (id)initWithCoder:;
- (void)setProgress:;
+ (id)JSONKeyPathsByPropertyKey;
@end
