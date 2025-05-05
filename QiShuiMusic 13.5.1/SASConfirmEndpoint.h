@interface SASConfirmEndpoint : SABaseClientBoundCommand
@property (nonatomic) NSNumber endpointConfirmationTimestamp;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)endpointConfirmationTimestamp;
- (void)setEndpointConfirmationTimestamp:;
+ (id)confirmEndpoint;
+ (id)confirmEndpointWithDictionary:context:;
@end
