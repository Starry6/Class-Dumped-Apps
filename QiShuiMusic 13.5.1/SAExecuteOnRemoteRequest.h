@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand
@property (nonatomic) SARemoteDevice remoteDevice;
@property (nonatomic) BOOL requiresResponseFromRemote;
@property (nonatomic) NSData serializedCommand;
@property (nonatomic) BOOL suppressResponse;
@property (nonatomic) BOOL useGuaranteedDelivery;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setRemoteDevice:;
- (id)remoteDevice;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponseFromRemote;
- (void)setRequiresResponseFromRemote:;
- (id)serializedCommand;
- (void)setSerializedCommand:;
- (BOOL)suppressResponse;
- (void)setSuppressResponse:;
- (BOOL)useGuaranteedDelivery;
- (void)setUseGuaranteedDelivery:;
+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:context:;
@end
