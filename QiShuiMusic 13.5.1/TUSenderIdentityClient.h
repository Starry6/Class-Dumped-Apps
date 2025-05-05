@interface TUSenderIdentityClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <TUCoreTelephonyClient> client;
- (id)init;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
- (id)queue;
- (BOOL)isRTTAvailableForSenderIdentityUUID:;
- (BOOL)isRTTSupportedForSenderIdentityUUID:;
- (BOOL)isTTYAvailableForSenderIdentityUUID:;
- (BOOL)isTTYEnabledForSenderIdentityUUID:;
- (BOOL)isTTYSupportedForSenderIdentityUUID:;
- (BOOL)isTTYHardwareAvailableForSenderIdentityUUID:;
- (BOOL)isTTYHardwareEnabledForSenderIdentityUUID:;
- (BOOL)isTTYHardwareSupportedForSenderIdentityUUID:;
- (BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:;
- (BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:;
- (BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:;
- (BOOL)inEmergencyMode;
- (BOOL)isEmergencyNumberForDigits:senderIdentityUUID:;
- (BOOL)isEmergencyNumberForDigits:senderIdentityUUID:error:;
- (BOOL)isWhitelistedEmergencyNumberForDigits:senderIdentityUUID:;
- (BOOL)isWhitelistedEmergencyNumberForDigits:senderIdentityUUID:error:;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:error:;
- (id)testEmergencyHandleForAccountUUID:error:;
@end
