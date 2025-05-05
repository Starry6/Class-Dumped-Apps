@interface CEMDeviceInformationCommand_Status : CEMPayloadBase
@property (nonatomic) CEMDeviceInformationCommand_StatusQueryResponses statusQueryResponses;
@property (nonatomic) CEMDeviceInformationCommand_StatusErrorResponses statusErrorResponses;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusQueryResponses;
- (void)setStatusQueryResponses:;
- (id)statusErrorResponses;
- (void)setStatusErrorResponses:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithQueryResponses:withErrorResponses:;
+ (id)buildRequiredOnlyWithQueryResponses:;
@end
