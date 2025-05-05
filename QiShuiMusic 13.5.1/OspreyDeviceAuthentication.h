@interface OspreyDeviceAuthentication : NSObject
@property (nonatomic) Q currentStrategyVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)_currentStrategy;
- (unsigned long long)authenticationStrategyVersion;
- (void)signData:success:failure:;
- (id)initWithChannel:connectionPreferences:allPreferences:;
- (void)setCurrentStrategyVersion:;
- (unsigned long long)currentStrategyVersion;
@end
