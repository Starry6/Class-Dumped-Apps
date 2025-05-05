@interface BDUGLuckyTimeTable : BDUGLuckyBDModel
@property (nonatomic) double activityStartTimeMs;
@property (nonatomic) double activityEndTimeMs;
- (double)activityEndTimeMs;
- (double)activityStartTimeMs;
- (void)setActivityEndTimeMs:;
- (void)setActivityStartTimeMs:;
+ (id)modelCustomPropertyMapper;
@end
