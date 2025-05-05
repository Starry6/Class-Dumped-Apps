@interface SAEndpoint : AceObject
@property (nonatomic) NSDictionary operations;
@property (nonatomic) NSString providerId;
@property (nonatomic) BOOL supportsAuthentication;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operations;
- (id)groupIdentifier;
- (void)setSupportsAuthentication:;
- (id)encodedClassName;
- (BOOL)supportsAuthentication;
- (void)setOperations:;
- (id)providerId;
- (void)setProviderId:;
+ (id)endpoint;
+ (id)endpointWithDictionary:context:;
@end
