@interface TMStrategyProvider : NSObject
@property (nonatomic) NSString lastActiveSignature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleConfigUpdate;
- (id)lastActiveSignature;
- (void)setLastActiveSignature:;
- (id)signatureFromStrategies:;
- (id)init;
- (void)dealloc;
- (id)displayName;
- (void).cxx_destruct;
- (long long)priority;
- (id)strategies;
@end
