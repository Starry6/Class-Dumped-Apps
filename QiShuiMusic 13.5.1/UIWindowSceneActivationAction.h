@interface UIWindowSceneActivationAction : UIAction
@property (nonatomic) <_UIWindowSceneActivator> _preferredActivator;
@property (nonatomic) @? _configurationProvider;
@property (nonatomic) UIAction _alternateAction;
@property (nonatomic) NSString title;
- (void)setTitle:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (BOOL)keepsMenuPresented;
- (id)_immutableCopy;
- (id)copyWithZone:;
- (id)initWithTitle:image:identifier:discoverabilityTitle:attributes:state:handler:;
- (void)_willBePreparedForInitialDisplay:;
- (id)initWithTitle:image:identifier:discoverabilityTitle:attributes:alternateAction:configurationProvider:;
- (void)_requestSceneActivation;
- (id)_preferredActivator;
- (void)set_preferredActivator:;
- (id)_configurationProvider;
- (void)_setConfigurationProvider:;
- (id)_alternateAction;
- (void)_setAlternateAction:;
+ (id)actionWithIdentifier:alternateAction:configurationProvider:;
+ (id)_defaultTitle;
+ (id)_defaultImage;
+ (id)actionWithHandler:;
+ (id)actionWithTitle:image:identifier:handler:;
@end
