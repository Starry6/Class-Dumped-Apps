@interface AWEHitTaskInfoModel : AWEBaseApiModel
@property (nonatomic) q completedTaskCount;
@property (nonatomic) q totalTaskCount;
- (long long)completedTaskCount;
- (void)setCompletedTaskCount:;
- (long long)totalTaskCount;
- (void)setTotalTaskCount:;
- (id)initWithDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end
