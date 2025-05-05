@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction
@property (nonatomic) BOOL resolvesAllParameters;
@property (nonatomic) NSArray parameterNames;
- (id)initWithCoder:;
- (id)initWithIntent:parameterName:;
- (void)encodeWithCoder:;
- (id)parameterNames;
- (BOOL)executeRemotelyWithVendorRemote:completionHandler:;
- (void).cxx_destruct;
- (void)executeLocallyWithIntentDeliverer:completionHandler:;
- (id)initWithIntent:parameterNames:;
- (id)_completionHandlerForMultipleParametersWithActionCompletionHandler:;
- (id)_completionHandlerForSingleParameterNamed:withActionCompletionHandler:;
- (BOOL)resolvesAllParameters;
+ (BOOL)supportsSecureCoding;
+ (Class)responseClass;
@end
