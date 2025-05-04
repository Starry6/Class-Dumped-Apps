@interface AWECodeGenOperationalStrategyModel : AWEBaseDataModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger displayInterval;
@property (nonatomic) NSInteger displayTotalTimes;
@property (nonatomic) NSInteger displayAutoExitInterval;
@property (nonatomic) NSArray displayMsgConfigModelArray;
- (void)setDisplayInterval:;
- (int)displayTotalTimes;
- (void)setDisplayTotalTimes:;
- (int)displayAutoExitInterval;
- (void)setDisplayAutoExitInterval:;
- (id)displayMsgConfigModelArray;
- (void)setDisplayMsgConfigModelArray:;
- (int)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
- (int)displayInterval;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
