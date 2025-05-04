@interface AWEECOMIMMsgFoldFinalConfig : NSObject
@property (nonatomic) AWEECOMIMMsgFoldConfig fallbackConfig;
@property (nonatomic) AWEECOMIMMsgFoldConfig serverConfig;
@property (nonatomic) NSMutableDictionary foldGroupConfigMap;
- (id)foldGroupConfigWithFoldGroupKey:;
- (id)initWithFallbackConfig:serverConfig:;
- (id)fallbackConfig;
- (void)setFoldGroupConfigMap:;
- (id)foldGroupConfigMap;
- (void)setFallbackConfig:;
- (void)generateFoldGroupConfigWithFoldGroupKey:;
- (void)setServerConfig:;
- (void).cxx_destruct;
- (id)serverConfig;
@end
