@interface FINodeObserver : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopObserving:;
- (void)startObserving:;
+ (id)propertyName:;
+ (id)observerForFINode:withObserver:;
@end
