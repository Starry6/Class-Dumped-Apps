@interface INIntentTestResult : NSObject
@property (nonatomic) INIntent resolvedIntent;
@property (nonatomic) NSDictionary resolvedParameters;
@property (nonatomic) BOOL resolvedAllParametersSuccesfully;
@property (nonatomic) INIntentResponse confirmResponse;
@property (nonatomic) INIntentResponse handleResponse;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithResolvedIntent:resolvedParameters:resolvedAllParametersSuccesfully:confirmResponse:handleResponse:;
- (id)resolvedIntent;
- (id)resolvedParameters;
- (BOOL)resolvedAllParametersSuccesfully;
- (id)confirmResponse;
- (id)handleResponse;
@end
