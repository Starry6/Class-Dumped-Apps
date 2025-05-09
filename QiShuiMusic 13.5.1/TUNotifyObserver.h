@interface TUNotifyObserver : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSString notificationName;
@property (nonatomic) NSInteger token;
@property (nonatomic) @? callback;
@property (nonatomic) Q state;
@property (nonatomic) BOOL observing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)callback;
- (id)notificationName;
- (void)setCallback:;
- (id)initWithNotificationName:queue:;
- (void)dealloc;
- (void)beginObserving;
- (void)endObserving;
- (int)token;
- (BOOL)isObserving;
- (id)initWithNotificationName:queue:callback:;
- (id)lock;
- (void)setToken:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)_endObserving;
- (id)queue;
- (void)setNotificationName:;
@end
