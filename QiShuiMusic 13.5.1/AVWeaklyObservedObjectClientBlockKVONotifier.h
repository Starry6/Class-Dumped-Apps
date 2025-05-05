@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)start;
- (id)initWithCallbackContextRegistry:observer:object:keyPath:options:block:;
- (void)callbackDidFireWithChangeDictionary:;
- (void)cancelCallbacks;
@end
