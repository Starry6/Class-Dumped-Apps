@interface AWEIMComponentEventDispatcher : NSObject
@property (nonatomic) NSMutableDictionary observersMap;
- (id)actionPublisher:;
- (void)observeAction:withComponent:;
- (void)p_observeAction:withComponent:;
- (id)init;
- (void).cxx_destruct;
- (id)observersMap;
- (void)setObserversMap:;
@end
