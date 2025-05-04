@interface AWEYAPBridgePluginEngine : NSObject
@property (nonatomic) NSMutableDictionary pluginInstanceDic;
- (id)pigeonMethodPluginDic;
- (id)pigeonMethodNames;
- (id)p_generatePluginWithMethodName:;
- (id)pluginInstanceDic;
- (void)callMethod:arguments:completion:;
- (void)setPluginInstanceDic:;
- (void).cxx_destruct;
@end
