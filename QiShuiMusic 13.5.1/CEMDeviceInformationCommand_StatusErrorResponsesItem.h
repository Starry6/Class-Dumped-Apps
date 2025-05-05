@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase
@property (nonatomic) NSString statusCode;
@property (nonatomic) NSArray statusErrorChain;
- (void)setStatusCode:;
- (id)statusCode;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusErrorChain;
- (void)setStatusErrorChain:;
+ (id)allowedStatusKeys;
+ (id)buildWithCode:withErrorChain:;
+ (id)buildRequiredOnlyWithCode:;
@end
