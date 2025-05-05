@interface AFKeyValueObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithObject:keyPath:handler:deliveryOptions:;
- (void)_handleObservedChangeWithOldValue:andNewValue:;
@end
