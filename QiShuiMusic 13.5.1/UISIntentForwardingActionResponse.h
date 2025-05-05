@interface UISIntentForwardingActionResponse : BSActionResponse
@property (nonatomic) INIntentResponse intentResponse;
@property (nonatomic) INIntentForwardingActionResponse intentForwardingActionResponse;
- (void).cxx_destruct;
- (id)intentResponse;
- (id)keyDescriptionForSetting:;
- (id)initWithIntentForwardingActionResponse:;
- (id)initWithIntentResponse:;
- (id)intentForwardingActionResponse;
+ (id)responseWithIntentForwardingActionResponse:;
+ (id)responseWithIntentResponse:;
@end
