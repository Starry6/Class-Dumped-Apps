@interface SBScreenTimeTrackingController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutMonitor:didUpdateDisplayLayout:withContext:;
- (id)init;
- (void)dealloc;
- (void)_queue_setScreenOn:withContext:;
- (void).cxx_destruct;
- (id)_nameForContext:;
- (void)_queue_setPhoneOrFaceTimeActive:;
- (void)_queue_setActiveCategory:context:;
- (void)_queue_handleNewLayout:withContext:;
@end
