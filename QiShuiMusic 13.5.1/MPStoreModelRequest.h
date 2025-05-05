@interface MPStoreModelRequest : MPModelRequest
@property (nonatomic) double timeoutInterval;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString clientVersion;
@property (nonatomic) NSString clientPlatformIdentifier;
@property (nonatomic) Q authenticationOptions;
- (id)init;
- (void)setClientVersion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timeoutInterval;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (void)setTimeoutInterval:;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:;
- (id)clientPlatformIdentifier;
- (void)setClientPlatformIdentifier:;
- (unsigned long long)authenticationOptions;
- (void)setAuthenticationOptions:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
@end
