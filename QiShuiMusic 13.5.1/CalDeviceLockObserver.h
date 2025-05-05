@interface CalDeviceLockObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) CalDarwinNotificationListener notificationListener;
@property (nonatomic) @? stateChangedCallback;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)hasBeenUnlockedSinceBoot;
- (void)setWorkQueue:;
- (void)_notificationReceived;
- (void)setInternalHasBeenUnlockedSinceBoot:;
- (id)workQueue;
- (id)initWithStateChangedCallback:;
- (id)notificationListener;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void)setNotificationListener:;
- (id)stateChangedCallback;
- (void).cxx_destruct;
- (void)setStateChangedCallback:;
- (BOOL)internalHasBeenUnlockedSinceBoot;
+ (BOOL)hasBeenUnlockedSinceBoot;
+ (id)stateChangedNotificationName;
@end
