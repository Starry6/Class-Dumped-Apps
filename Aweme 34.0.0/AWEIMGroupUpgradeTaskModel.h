@interface AWEIMGroupUpgradeTaskModel : AWEBaseApiModel
@property (nonatomic) Q taskType;
@property (nonatomic) NSString taskName;
@property (nonatomic) Q taskStatus;
@property (nonatomic) NSString taskDesc;
@property (nonatomic) NSString jumpLink;
- (void)setTaskStatus:;
- (id)jumpLink;
- (void)setJumpLink:;
- (unsigned long long)taskType;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (void)setTaskType:;
- (unsigned long long)taskStatus;
- (void)setTaskDesc:;
- (id)taskDesc;
+ (id)JSONKeyPathsByPropertyKey;
@end
