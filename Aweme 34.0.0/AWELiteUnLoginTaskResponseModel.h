@interface AWELiteUnLoginTaskResponseModel : AWELiteBaseApiModel
@property (nonatomic) Q taskDuration;
@property (nonatomic) AWELiteUnLoginReadTaskModel unLoginReadTaskModel;
@property (nonatomic) AWELuckyCatPendant pendant;
- (id)pendant;
- (void)setPendant:;
- (unsigned long long)taskDuration;
- (void)setTaskDuration:;
- (id)unLoginReadTaskModel;
- (void)setUnLoginReadTaskModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
