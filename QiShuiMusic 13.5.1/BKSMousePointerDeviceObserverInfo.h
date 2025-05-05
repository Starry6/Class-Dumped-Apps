@interface BKSMousePointerDeviceObserverInfo : NSObject
@property (nonatomic) <BKSMousePointerDeviceObserver> observer;
@property (nonatomic) NSSet visibleDevices;
- (void)setVisibleDevices:;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)observer;
- (id)visibleDevices;
@end
