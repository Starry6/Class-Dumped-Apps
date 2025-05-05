@interface NSKeyValueObservance : NSObject
- (void)observeValueForKeyPath:ofObject:change:context:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithObserver:property:options:context:originalObservable:;
@end
