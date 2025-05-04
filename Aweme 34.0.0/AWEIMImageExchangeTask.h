@interface AWEIMImageExchangeTask : AWEIMUGTaskModel
@property (nonatomic) NSString messageID;
@property (nonatomic) NSString buriedInfo;
@property (nonatomic) BOOL isRequestingTask;
- (id)initWithContentDict:;
- (id)contentInfo;
- (id)buriedInfo;
- (void)setBuriedInfo:;
- (BOOL)isRequestingTask;
- (void)setIsRequestingTask:;
- (id)initWithActivityId:taskId:taskToken:createTime:;
- (id)initWithMessageID:activityId:taskId:taskToken:;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
