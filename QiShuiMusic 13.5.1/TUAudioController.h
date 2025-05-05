@interface TUAudioController : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> modifyingStateLock;
- (void)setModifyingStateLock:;
- (id)init;
- (id)modifyingStateLock;
- (void)_releaseLock;
- (void)_acquireLock;
- (void).cxx_destruct;
- (void)_requestUpdatedValueWithBlock:object:isRequestingPointer:forceNewRequest:scheduleTimePointer:notificationString:queue:;
- (void)_requestUpdatedValueWithBlock:object:isRequestingPointer:forceNewRequest:scheduleTimePointer:notificationString:notificationUserInfo:queue:;
@end
