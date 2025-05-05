@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase
@property (nonatomic) NSString payloadUserName;
@property (nonatomic) NSString payloadPassword;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)payloadUserName;
- (void)setPayloadUserName:;
- (id)payloadPassword;
- (void)setPayloadPassword:;
+ (id)allowedPayloadKeys;
+ (id)buildWithUserName:withPassword:;
+ (id)buildRequiredOnlyWithUserName:withPassword:;
@end
