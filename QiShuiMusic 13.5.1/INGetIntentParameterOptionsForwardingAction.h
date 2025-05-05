@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction
@property (nonatomic) NSString parameterName;
@property (nonatomic) NSString searchTerm;
- (id)initWithCoder:;
- (id)parameterName;
- (void)encodeWithCoder:;
- (id)searchTerm;
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void).cxx_destruct;
- (id)_completionHandlerWithActionCompletionHandler:;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
- (id)initWithIntent:parameterName:searchTerm:;
+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;
@end
