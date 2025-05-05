@interface SFChangePublisher : NSObject
@property (nonatomic) NSPointerArray observers;
- (void)registerChangeObserver:;
- (void)unregisterChangeObserver:;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)publishChangeDescriptor:forObservable:;
@end
