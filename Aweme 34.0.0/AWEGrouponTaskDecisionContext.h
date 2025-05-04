@interface AWEGrouponTaskDecisionContext : NSObject
@property (nonatomic) NSString triggerType;
@property (nonatomic) NSString triggerSource;
@property (nonatomic) BOOL isDestroy;
@property (nonatomic) NSArray tasks;
@property (nonatomic) AWEGrouponTaskCommonContext commonContext;
- (id)initWithTasks:triggerType:triggerSource:;
- (BOOL)isDestroy;
- (void)setIsDestroy:;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (id)commonContext;
- (void)setCommonContext:;
- (void)setTasks:;
- (id)tasks;
- (void)setTriggerSource:;
- (id)triggerSource;
@end
