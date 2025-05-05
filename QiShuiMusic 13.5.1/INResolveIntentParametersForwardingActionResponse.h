@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse
@property (nonatomic) BOOL success;
@property (nonatomic) INIntent updatedIntent;
@property (nonatomic) NSDictionary parameterResolutionResults;
- (BOOL)isSuccess;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSuccess:updatedIntent:parameterResolutionResults:error:;
- (id)updatedIntent;
- (id)parameterResolutionResults;
+ (BOOL)supportsSecureCoding;
@end
