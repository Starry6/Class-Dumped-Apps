@interface AWEFeedTabJumpConditionTriggerManager : NSObject
@property (nonatomic) NSMutableDictionary bindingDict;
- (id)bindingDict;
- (void)setBindingDict:;
- (void)addTriggerByEventType:;
- (void)startObserveWithHandler:;
- (void)triggerByEventType:;
- (void)dealloc;
- (void).cxx_destruct;
@end
