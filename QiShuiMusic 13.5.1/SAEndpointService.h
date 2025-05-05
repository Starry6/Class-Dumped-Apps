@interface SAEndpointService : SAEndpoint
@property (nonatomic) NSString serverUrl;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)serverUrl;
- (void)setServerUrl:;
+ (id)endpointService;
+ (id)endpointServiceWithDictionary:context:;
@end
