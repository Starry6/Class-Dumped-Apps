@interface AWEActivityTaskDoneModel : AWEBaseApiModel
@property (nonatomic) q taskStatus;
@property (nonatomic) NSString toast;
- (void)setTaskStatus:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (long long)taskStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
