@interface BDUGLuckyTaskTimerXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString action;
@property (nonatomic) NSString taskID;
@property (nonatomic) q timerInterval;
- (long long)timerInterval;
- (id)action;
- (void)setAction:;
- (void)setTaskID:;
- (void).cxx_destruct;
- (id)taskID;
- (void)setTimerInterval:;
+ (id)JSONKeyPathsByPropertyKey;
@end
