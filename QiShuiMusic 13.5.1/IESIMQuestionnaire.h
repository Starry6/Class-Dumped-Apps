@interface IESIMQuestionnaire : IESIMBaseApiModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString taskSetting;
@property (nonatomic) BOOL isExpired;
- (void)setTaskSetting:;
- (id)taskSetting;
- (BOOL)isExpired;
- (id)taskId;
- (void).cxx_destruct;
- (void)setTaskId:;
- (void)setIsExpired:;
+ (id)JSONKeyPathsByPropertyKey;
@end
