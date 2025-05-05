@interface IESIMHitTaskInfoModel : IESIMBaseApiModel
@property (nonatomic) q completedTaskCount;
@property (nonatomic) q totalTaskCount;
- (long long)completedTaskCount;
- (void)setCompletedTaskCount:;
- (void)setTotalTaskCount:;
- (long long)totalTaskCount;
- (id)initWithDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end
