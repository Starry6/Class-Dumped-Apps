@interface UISApplicationSupportClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)_applicationSupportServiceEndpoint;
- (id)_remoteTarget;
- (void)destroyScenesWithPersistentIdentifiers:animationType:destroySessions:completion:;
- (void)requestPasscodeUnlockUIWithCompletion:;
- (id)applicationInitializationContextWithParameters:;
- (void).cxx_destruct;
- (void)invalidate;
@end
