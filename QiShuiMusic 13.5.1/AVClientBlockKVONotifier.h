@interface AVClientBlockKVONotifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSObject observedObject;
- (void)dealloc;
- (void)start;
- (id)initWithCallbackContextRegistry:observer:object:keyPath:options:block:;
- (void)callbackDidFireWithChangeDictionary:;
- (id)observedObject;
- (void)cancelCallbacks;
@end
