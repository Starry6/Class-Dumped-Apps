@interface BUJSBForwarding : NSObject
@property (nonatomic) NSMutableDictionary aliasDic;
- (id)amendAliasWith:;
- (id)_generatePluginWithCommand:engine:;
- (id)aliasDic;
- (id)aliasJSBForOrig:;
- (BOOL)forwardDynamicPluginWithCommand:engine:completion:;
- (void)forwardJSBWithCommand:engine:completion:;
- (BOOL)forwardStaticPluginWithCommand:engine:completion:;
- (void)registeJSBAlias:for:;
- (void)setAliasDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
