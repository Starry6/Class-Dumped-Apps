@interface NSObservation : NSObject
- (void)remove;
- (id)initWithObservable:observer:;
- (id)initWithObservable:blockSink:tag:;
- (id)_observerStorageOfSize:;
- (id)_observerStorage;
+ (id)allocWithZone:;
@end
