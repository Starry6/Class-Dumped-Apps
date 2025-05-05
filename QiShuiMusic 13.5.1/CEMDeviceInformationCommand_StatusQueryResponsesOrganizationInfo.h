@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase
@property (nonatomic) NSString statusOrganizationName;
@property (nonatomic) NSString statusOrganizationAddress;
@property (nonatomic) NSString statusOrganizationPhone;
@property (nonatomic) NSString statusOrganizationEmail;
@property (nonatomic) NSString statusOrganizationMagic;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusOrganizationName;
- (void)setStatusOrganizationName:;
- (id)statusOrganizationAddress;
- (void)setStatusOrganizationAddress:;
- (id)statusOrganizationPhone;
- (void)setStatusOrganizationPhone:;
- (id)statusOrganizationEmail;
- (void)setStatusOrganizationEmail:;
- (id)statusOrganizationMagic;
- (void)setStatusOrganizationMagic:;
+ (id)allowedStatusKeys;
+ (id)buildWithOrganizationName:withOrganizationAddress:withOrganizationPhone:withOrganizationEmail:withOrganizationMagic:;
+ (id)buildRequiredOnlyWithOrganizationName:;
@end
