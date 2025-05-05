@interface CEMManagementTestDeclaration_Status : CEMPayloadBase
@property (nonatomic) NSString statusEcho;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusEcho;
- (void)setStatusEcho:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithEcho:;
+ (id)buildRequiredOnlyWithEcho:;
@end
