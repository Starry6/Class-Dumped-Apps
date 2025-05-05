@interface MRExternalDeviceTransport : NSObject
@property (nonatomic) MRDeviceInfo deviceInfo;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString hostname;
@property (nonatomic) q port;
@property (nonatomic) BOOL requiresCustomPairing;
@property (nonatomic) BOOL shouldUseSystemAuthenticationPrompt;
@property (nonatomic) NSError error;
@property (nonatomic) q connectionType;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL supportsIdleDisconnection;
- (long long)connectionType;
- (id)hostname;
- (id)deviceInfo;
- (id)uid;
- (long long)port;
- (id)error;
- (void)resetWithError:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)name;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:;
- (id)createConnectionWithUserInfo:;
- (BOOL)requiresCustomPairing;
- (BOOL)supportsIdleDisconnection;
@end
