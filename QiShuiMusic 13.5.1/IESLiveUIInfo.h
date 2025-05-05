@interface IESLiveUIInfo : NSObject
@property (nonatomic) NSMutableDictionary observerDict;
@property (nonatomic) q applicationState;
- (id)observerDict;
- (void)onAppLifeCyleChange;
- (void)setObserverDict:;
- (id)init;
- (void)dealloc;
- (void)setApplicationState:;
- (long long)applicationState;
- (void).cxx_destruct;
- (void)removeObservers;
+ (id)sharedUIInfo;
@end
