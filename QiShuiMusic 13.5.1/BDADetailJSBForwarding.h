@interface BDADetailJSBForwarding : NSObject
@property (nonatomic) NSMutableDictionary aliasDic;
- (id)amendAliasWith:;
- (id)_generatePluginWithCommand:engine:;
- (id)aliasDic;
- (id)aliasJSBForOrig:;
- (void)forwardDynamicPluginWithCommand:engine:completion:;
- (void)forwardJSBWithCommand:engine:completion:;
- (void)forwardStaticPluginWithCommand:engine:completion:;
- (void)invoke:completion:engine:;
- (void)registeJSBAlias:for:;
- (void)setAliasDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
