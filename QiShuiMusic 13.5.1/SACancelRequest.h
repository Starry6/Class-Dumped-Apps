@interface SACancelRequest : SABaseCommand
@property (nonatomic) q clientCancellationCode;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (long long)clientCancellationCode;
- (void)setClientCancellationCode:;
+ (id)cancelRequest;
+ (id)cancelRequestWithDictionary:context:;
@end
