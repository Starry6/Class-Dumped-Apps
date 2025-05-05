@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase
@property (nonatomic) NSData statusUnlockToken;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusUnlockToken;
- (void)setStatusUnlockToken:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithUnlockToken:;
@end
