@interface INConfirmIntentForwardingActionResponse : INIntentForwardingActionResponse
@property (nonatomic) INIntentResponse intentResponse;
@property (nonatomic) NSData launchContextActivityData;
@property (nonatomic) NSSet cacheItems;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)intentResponse;
- (id)initWithIntentResponse:launchContextActivityData:cacheItems:error:;
- (id)launchContextActivityData;
- (id)cacheItems;
+ (BOOL)supportsSecureCoding;
@end
