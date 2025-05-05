@interface SAStartDirectActionRequest : SAStartRequest
@property (nonatomic) NSString directAction;
@property (nonatomic) NSDictionary requestExecutionParameters;
@property (nonatomic) NSString utteranceFromRequestParameters;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)directAction;
- (void)setDirectAction:;
- (id)requestExecutionParameters;
- (void)setRequestExecutionParameters:;
- (id)utteranceFromRequestParameters;
- (void)setUtteranceFromRequestParameters:;
+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:context:;
@end
