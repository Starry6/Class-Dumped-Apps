@interface AWEIMUGTaskModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString taskToken;
@property (nonatomic) double createTime;
- (id)initWithContentDict:;
- (id)contentInfo;
- (id)taskToken;
- (void)setTaskToken:;
- (id)initWithActivityId:taskId:taskToken:createTime:;
- (id)extLogInfo;
- (id)init;
- (double)createTime;
- (unsigned long long)type;
- (void)setCreateTime:;
- (void)setType:;
- (void).cxx_destruct;
- (id)taskId;
- (id)copyWithZone:;
- (id)activityId;
- (void)setActivityId:;
- (void)setTaskId:;
@end
