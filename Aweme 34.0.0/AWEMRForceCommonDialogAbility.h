@interface AWEMRForceCommonDialogAbility : NSObject
@property (nonatomic) AWEMRForceNativeDialogHandler dialogHandler;
@property (nonatomic) <AWEMRForceCommonDialogPluginProtocol> bizPlugin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissDialogWithAnimated:closeType:completion:;
- (id)dialogHandler;
- (void)setDialogHandler:;
- (id)bizPlugin;
- (id)initWithDialogHandler:bizPlugin:;
- (void)setBizPlugin:;
- (void).cxx_destruct;
@end
