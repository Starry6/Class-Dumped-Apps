@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase
@property (nonatomic) NSString statusActivationLockBypassCode;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusActivationLockBypassCode;
- (void)setStatusActivationLockBypassCode:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithActivationLockBypassCode:;
+ (id)buildRequiredOnlyWithActivationLockBypassCode:;
@end
