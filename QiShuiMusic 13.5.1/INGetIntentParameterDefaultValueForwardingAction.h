@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction
@property (nonatomic) NSString parameterName;
- (id)initWithCoder:;
- (id)parameterName;
- (id)initWithIntent:parameterName:;
- (void)encodeWithCoder:;
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void).cxx_destruct;
- (id)_completionHandlerWithActionCompletionHandler:;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;
@end
