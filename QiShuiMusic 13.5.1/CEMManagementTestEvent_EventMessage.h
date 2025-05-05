@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase
@property (nonatomic) NSString eventmessageEcho;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)eventmessageEcho;
- (void)setEventmessageEcho:;
+ (id)allowedReasons;
+ (id)buildWithEcho:;
+ (id)buildRequiredOnlyWithEcho:;
+ (id)allowedEventMessageKeys;
@end
