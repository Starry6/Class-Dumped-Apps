@interface SAStartStructuredDictationRequest : SAStartRequest
@property (nonatomic) NSString structuredDictationType;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)structuredDictationType;
- (void)setStructuredDictationType:;
+ (id)startStructuredDictationRequest;
+ (id)startStructuredDictationRequestWithDictionary:context:;
@end
