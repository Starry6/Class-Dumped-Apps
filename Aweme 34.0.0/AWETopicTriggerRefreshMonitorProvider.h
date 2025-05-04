@interface AWETopicTriggerRefreshMonitorProvider : NSObject
@property (nonatomic) AWESearchTriggerRefreshMonitorProvider realImp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleEventDidStart:;
- (id)handleEventAddStage:withAppendParams:;
- (id)handleEventDidEnd:;
- (id)eliminateKeysBeforeSendEvent;
- (id)realImp;
- (void)setRealImp:;
- (id)init;
- (void).cxx_destruct;
- (id)eventName;
@end
