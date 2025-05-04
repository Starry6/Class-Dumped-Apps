@interface AWEClassroomModel.ClassroomLessonNoteInfoModel : MTLModel
@property (nonatomic) NSString videoGroupId;
@property (nonatomic) NSArray forecasts;
@property (nonatomic) q numNotes;
@property (nonatomic) q numUserNotes;
- (long long)numNotes;
- (void)setNumNotes:;
- (id)videoGroupId;
- (void)setVideoGroupId:;
- (long long)numUserNotes;
- (void)setNumUserNotes:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setForecasts:;
- (id)forecasts;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)forecastsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
