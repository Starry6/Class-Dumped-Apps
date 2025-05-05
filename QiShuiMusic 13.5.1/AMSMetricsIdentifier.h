@interface AMSMetricsIdentifier : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSString domain;
@property (nonatomic) double duration;
- (id)account;
- (void)setClientInfo:;
- (id)init;
- (void)setAccount:;
- (id)clientInfo;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)generateEventFields;
- (id)domain;
- (void)setDomain:;
- (double)duration;
- (id)generateIdentifier;
+ (void)removeIdentifiersForAccount:;
+ (void)cleanupIdentifiers;
+ (id)clientIdKey;
@end
