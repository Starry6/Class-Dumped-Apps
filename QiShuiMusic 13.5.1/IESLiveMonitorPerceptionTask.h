@interface IESLiveMonitorPerceptionTask : NSObject
@property (nonatomic) NSString moduleKey;
@property (nonatomic) NSString eventName;
@property (nonatomic) @? action;
- (id)moduleKey;
- (void)setModuleKey:;
- (id)action;
- (void)setAction:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
@end
