@interface PAAggregateVisibilityStateMonitorHandle : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setVisibilityState:forBundleID:;
- (id)initWithStartupInterval:onQueue:delegate:;
- (void)bindToRawHandle:;
- (void)startupIntervalExpired;
- (void)recomputeCurrentState;
@end
