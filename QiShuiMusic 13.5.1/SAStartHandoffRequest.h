@interface SAStartHandoffRequest : SAStartRequest
@property (nonatomic) NSData handoffData;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)handoffData;
- (void)setHandoffData:;
+ (id)startHandoffRequest;
+ (id)startHandoffRequestWithDictionary:context:;
@end
