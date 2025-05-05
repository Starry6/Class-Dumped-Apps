@interface TTBridgeForwarding : NSObject
@property (nonatomic) BDXThreadSafeDictionary aliasDic;
- (id)amendAliasWith:;
- (id)_generatePluginWithCommand:engine:;
- (void)_installAssociatedPluginsOnEngine:;
- (id)aliasDic;
- (id)aliasForOrig:;
- (void)forwardPluginWithCommand:engine:completion:;
- (void)forwardWithCommand:engine:completion:;
- (void)forwardWithCommand:weakEngine:completion:;
- (void)invoke:completion:engine:;
- (void)registerPlugin:forBridge:;
- (void)setAliasDic:;
- (void)unregisterPluginForBridge:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
