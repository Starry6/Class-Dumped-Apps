@interface BKSHIDEventObserver : NSObject
@property (nonatomic) NSSet deferringResolutions;
- (id)init;
- (void)didUpdateDeferringResolutions:;
- (id)addDeferringObserver:;
- (void).cxx_destruct;
- (id)_init;
- (void)_lock_disableObservation;
- (id)deferringResolutions;
- (void)_lock_enableObservation;
+ (id)sharedInstance;
@end
