@interface IMBalloonAppExtension : IMBalloonPlugin
@property (nonatomic) LSPlugInKitProxy proxy;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) BOOL canSendDataPayloads;
@property (nonatomic) BOOL shouldBalloonHideAppIcon;
@property (nonatomic) NSExtension extension;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) <PKPlugIn> plugin;
@property (nonatomic) BOOL isLaunchProhibited;
- (id)requestIdentifier;
- (void)setProxy:;
- (id)proxy;
- (id)version;
- (id)itemID;
- (id)extension;
- (BOOL)isLaunchProhibited;
- (void)setRequestIdentifier:;
- (void).cxx_destruct;
- (id)plugin;
- (id)initWithPluginBundle:pluginKitProxy:extension:;
- (BOOL)canSendDataPayloads;
- (BOOL)isBetaPlugin;
- (id)initWithPluginBundle:extension:;
- (id)_initWithPluginBundle:extension:pluginKitProxyClass:;
- (id)initWithPluginBundle:appBundle:;
- (BOOL)shouldBalloonHideAppIcon;
- (void)setCanSendDataPayloads:;
- (void)setShouldBalloonHideAppIcon:;
@end
