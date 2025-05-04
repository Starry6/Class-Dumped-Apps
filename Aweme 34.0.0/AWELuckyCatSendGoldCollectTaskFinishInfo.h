@interface AWELuckyCatSendGoldCollectTaskFinishInfo : AWEBaseApiModel
@property (nonatomic) NSString taskKey;
@property (nonatomic) q taskID;
@property (nonatomic) BOOL isLastTime;
@property (nonatomic) BOOL isReceiverLastTime;
- (id)taskKey;
- (void)setTaskKey:;
- (BOOL)isLastTime;
- (void)setIsLastTime:;
- (BOOL)isReceiverLastTime;
- (void)setIsReceiverLastTime:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (long long)taskID;
+ (id)JSONKeyPathsByPropertyKey;
@end
