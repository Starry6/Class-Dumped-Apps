@interface AWEDiversionTimerConfigModel : AWEBaseApiModel
@property (nonatomic) double reportInterval;
@property (nonatomic) NSArray supportScene;
@property (nonatomic) NSArray evadeType;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString buoyRunningText;
@property (nonatomic) NSString buoyFinishTextLogin;
@property (nonatomic) NSString buoyFinishTextUnLogin;
@property (nonatomic) NSString finishSchema;
- (void)setReportInterval:;
- (double)reportInterval;
- (id)supportScene;
- (void)setSupportScene:;
- (id)buoyRunningText;
- (id)buoyFinishTextLogin;
- (id)buoyFinishTextUnLogin;
- (id)evadeType;
- (void)setEvadeType:;
- (void)setBuoyRunningText:;
- (void)setBuoyFinishTextLogin:;
- (void)setBuoyFinishTextUnLogin:;
- (id)finishSchema;
- (void)setFinishSchema:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
