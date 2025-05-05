@interface CLMClickEventMonitor : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) {shared_ptr<HIDEventMonitor>=^{HIDEventMonitor}^{__shared_weak_count}} hidEventMonitor;
- (id)init;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (id).cxx_construct;
- (id)initWithHIDDispatchQueueQOSClass:relativePriority:;
- (void)newClickEvent:;
- (id)eventsForMovieStartingAtMachAbsoluteTime:endingAt:;
- (id)hidEventMonitor;
- (void)setHidEventMonitor:;
@end
