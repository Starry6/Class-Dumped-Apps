@interface AWERTVSystemVolumeNotificationDispatcher : NSObject
@property (nonatomic) <RTVSystemVolumeChangeObserver><RTVMultipleDelegateInterface> observers;
@property (nonatomic) NSNumber obseverToken;
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (void)__handleVolumeChangeFrom:toValue:;
- (id)obseverToken;
- (void)dealloc;
- (void)removeObserver:;
- (id)observers;
- (id)injector;
- (void)addObserver:;
- (void).cxx_destruct;
@end
