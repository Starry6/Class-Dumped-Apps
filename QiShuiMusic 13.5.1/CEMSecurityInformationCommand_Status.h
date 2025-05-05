@interface CEMSecurityInformationCommand_Status : CEMPayloadBase
@property (nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo statusSecurityInfo;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusSecurityInfo;
- (void)setStatusSecurityInfo:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithSecurityInfo:;
+ (id)buildRequiredOnlyWithSecurityInfo:;
@end
