@interface CEMDeviceInformationCommand_StatusErrorResponses : CEMPayloadBase
@property (nonatomic) NSDictionary statusANY;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusANY;
- (void)setStatusANY:;
+ (id)build;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
@end
