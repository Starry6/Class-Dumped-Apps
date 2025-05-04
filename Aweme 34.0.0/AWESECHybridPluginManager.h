@interface AWESECHybridPluginManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hybridPluginClassDidRegistered:;
- (void)hybridPluginInstanceDidRegistered:;
- (void)setupPlugins;
@end
