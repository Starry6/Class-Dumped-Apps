@interface DTRpcConfigManagerMXXTIY : NSObject
@property (nonatomic) DTRpcConfigMXXTIY globalConfig;
@property (nonatomic) NSMutableDictionary operationTypeConfigs;
- (id)configForScope:;
- (id)globalConfig;
- (id)operationTypeConfigs;
- (id)preferredConfig:;
- (void)setConfig:forScope:;
- (void)setGlobalConfig:;
- (void)setOperationTypeConfigs:;
- (id)init;
- (void).cxx_destruct;
@end
