@interface AWEIMGroupUpgradeTaskModel : IESIMBaseApiModel
@property (nonatomic) NSString taskName;
@property (nonatomic) q taskStatus;
@property (nonatomic) NSString taskDesc;
@property (nonatomic) q taskType;
@property (nonatomic) NSString jumpLink;
- (id)jumpLink;
- (void)setJumpLink:;
- (void)setTaskDesc:;
- (void)setTaskStatus:;
- (id)taskDesc;
- (long long)taskType;
- (id)taskName;
- (void)setTaskName:;
- (void).cxx_destruct;
- (void)setTaskType:;
- (long long)taskStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
