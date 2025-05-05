@interface IDSGroupContextNotifyingObserver : NSObject
@property (nonatomic) NSMutableSet delegates;
- (void)addDelegate:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)dealloc;
- (void)removeDelegate:;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:;
- (void).cxx_destruct;
- (void)didReceiveDecryptionFailureForGroup:completion:;
- (void)didCacheGroup:completion:;
- (void)didCreateGroup:completion:;
- (void)didUpdateGroup:withNewGroup:completion:;
@end
