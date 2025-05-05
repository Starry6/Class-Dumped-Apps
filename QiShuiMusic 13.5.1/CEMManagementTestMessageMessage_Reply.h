@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase
@property (nonatomic) NSString replyEcho;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)replyEcho;
- (void)setReplyEcho:;
+ (id)allowedReasons;
+ (id)buildWithEcho:;
+ (id)buildRequiredOnlyWithEcho:;
+ (id)allowedReplyKeys;
@end
