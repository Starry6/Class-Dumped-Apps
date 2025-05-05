@interface LAACLBuilderCustomACLParams : NSObject
@property (nonatomic) q authType;
@property (nonatomic) q fallbackAuthType;
@property (nonatomic) NSDictionary apConstraints;
@property (nonatomic) NSDictionary credentials;
- (id)init;
- (id)credentials;
- (void)setAuthType:;
- (long long)authType;
- (void).cxx_destruct;
- (void)setCredentials:;
- (long long)fallbackAuthType;
- (void)setFallbackAuthType:;
- (id)apConstraints;
- (void)setApConstraints:;
@end
