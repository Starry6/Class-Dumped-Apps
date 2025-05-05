@interface INGetOnScreenContentForwardingActionResponse : INIntentForwardingActionResponse
@property (nonatomic) WFOnScreenContentNode node;
- (id)node;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithNode:error:;
+ (BOOL)supportsSecureCoding;
@end
