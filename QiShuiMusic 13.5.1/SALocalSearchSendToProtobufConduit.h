@interface SALocalSearchSendToProtobufConduit : SADomainCommand
@property (nonatomic) NSArray attributes;
@property (nonatomic) NSURL endpoint;
@property (nonatomic) NSData rawRequest;
@property (nonatomic) q timeoutInSeconds;
- (id)groupIdentifier;
- (void)setEndpoint:;
- (long long)timeoutInSeconds;
- (BOOL)requiresResponse;
- (void)setAttributes:;
- (id)attributes;
- (id)encodedClassName;
- (id)endpoint;
- (void)setRawRequest:;
- (id)rawRequest;
- (void)setTimeoutInSeconds:;
+ (id)sendToProtobufConduit;
+ (id)sendToProtobufConduitWithDictionary:context:;
@end
