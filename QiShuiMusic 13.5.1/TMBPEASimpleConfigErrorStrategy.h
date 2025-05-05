@interface TMBPEASimpleConfigErrorStrategy : NSObject
@property (nonatomic) NSDictionary defaultConfig;
@property (nonatomic) q errorCode;
@property (nonatomic) NSDictionary defaultStrategyConfig;
@property (nonatomic) NSDictionary config;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_convertStrategyToAbnormalStrategy:;
- (id)_defaultErrorStrategy;
- (id)_findStrategyOfError:dataType:inDict:;
- (id)defaultStrategyConfig;
- (id)initWithErrorCode:defaultConfig:;
- (void)setDefaultStrategyConfig:;
- (unsigned long long)strategyToHandleAbnormalCert:inEntryContext:;
- (void)updateConfig:;
- (long long)errorCode;
- (void)setConfig:;
- (id)defaultConfig;
- (id)lock;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)config;
- (void)setLock:;
- (void)setDefaultConfig:;
+ (id)convertDictToErrorStrategy:;
@end
