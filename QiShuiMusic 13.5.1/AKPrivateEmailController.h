@interface AKPrivateEmailController : NSObject
@property (nonatomic) AAFXPCSession remoteService;
@property (nonatomic) <AKPrivateEmailUIProvider> uiProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uiProvider;
- (id)init;
- (id)exportedObject;
- (void)setUiProvider:;
- (void).cxx_destruct;
- (id)remoteService;
- (void)configureRemoteInterface:;
- (id)initWithXPCSession:;
- (void)setRemoteService:;
- (void)lookupPrivateEmailForAltDSID:withKey:completion:;
- (void)lookupPrivateEmailWithContext:completion:;
- (void)fetchPrivateEmailForAltDSID:withKey:completion:;
- (void)fetchPrivateEmailWithContext:completion:;
- (void)registerPrivateEmailForAltDSID:withKey:completion:;
- (void)getContextForRequestContext:completion:;
- (void)deletePrivateEmailDatabaseWithCompletion:;
- (void)privateEmailListVersionWithCompletion:;
- (void)removePrivateEmailKey:completion:;
- (void)listAllPrivateEmailsForAltDSID:completion:;
@end
