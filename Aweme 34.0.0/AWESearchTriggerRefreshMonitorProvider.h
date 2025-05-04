@interface AWESearchTriggerRefreshMonitorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleEventDidStart:;
- (id)handleEventDidBindContext:;
- (id)handleEventAddStage:withAppendParams:;
- (id)handleEventDidEnd:;
- (id)eliminateKeysBeforeSendEvent;
- (void)handleFlowDetailEventsWith:monitorValue:firstScreenEndTS:;
- (id)eventName;
+ (BOOL)shouldSwitchToV3Cost;
+ (BOOL)shouldFixTimingTotalError;
+ (BOOL)shouldFixJsonParse;
@end
