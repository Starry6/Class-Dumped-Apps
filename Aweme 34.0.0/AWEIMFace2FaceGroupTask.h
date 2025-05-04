@interface AWEIMFace2FaceGroupTask : AWEIMUGTaskModel
@property (nonatomic) NSString groupId;
@property (nonatomic) BOOL hasSendInitNotice;
@property (nonatomic) BOOL hasSendMessage;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isRequestingTask;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)initWithContentDict:;
- (id)contentInfo;
- (BOOL)hasSendInitNotice;
- (void)setHasSendInitNotice:;
- (BOOL)hasSendMessage;
- (void)setHasSendMessage:;
- (BOOL)isRequestingTask;
- (void)setIsRequestingTask:;
- (id)extLogInfo;
- (id)initWithGroupId:enterFrom:activityId:taskId:taskToken:;
- (void)setGroupId:;
- (id)groupId;
- (id)taskName;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
