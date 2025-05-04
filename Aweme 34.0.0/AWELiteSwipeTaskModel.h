@interface AWELiteSwipeTaskModel : AWELiteBaseApiModel
@property (nonatomic) q taskId;
@property (nonatomic) NSString taskKey;
@property (nonatomic) q curTimes;
@property (nonatomic) q maxTimes;
@property (nonatomic) BOOL taskCompleted;
@property (nonatomic) AWELiteSwipeMaskDataModel maskData;
@property (nonatomic) AWELuckyCatPendant pendant;
- (long long)maxTimes;
- (void)setMaxTimes:;
- (id)taskKey;
- (id)pendant;
- (void)setPendant:;
- (void)setTaskKey:;
- (long long)curTimes;
- (void)setCurTimes:;
- (void)setMaskData:;
- (void).cxx_destruct;
- (long long)taskId;
- (void)setTaskId:;
- (BOOL)taskCompleted;
- (id)maskData;
- (void)setTaskCompleted:;
+ (id)JSONKeyPathsByPropertyKey;
@end
