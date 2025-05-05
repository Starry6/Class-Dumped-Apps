@interface MRNetServiceTransport : MRExternalDeviceTransport
@property (nonatomic) NSNetService netService;
@property (nonatomic) BOOL requiresCustomPairing;
- (long long)connectionType;
- (id)hostname;
- (id)deviceInfo;
- (void)dealloc;
- (long long)port;
- (id)error;
- (id)initWithNetService:;
- (void)resetWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:;
- (id)createConnectionWithUserInfo:;
- (BOOL)requiresCustomPairing;
- (BOOL)getInputStream:outputStream:userInfo:;
- (void)setNetService:;
- (void)updateDeviceInfoWithTXTRecord:;
- (void)setRequiresCustomPairing:;
- (id)netService;
+ (id)createDeviceInfoFromNetService:;
+ (id)createDeviceInfoFromTXTRecord:;
@end
