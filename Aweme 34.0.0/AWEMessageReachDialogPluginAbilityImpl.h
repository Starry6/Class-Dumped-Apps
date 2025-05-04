@interface AWEMessageReachDialogPluginAbilityImpl : NSObject
@property (nonatomic) AWEMessageReachNativeDialogHandler dialogHandler;
@property (nonatomic) <AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dialogHandler;
- (void)setDialogHandler:;
- (void)messageReach_dismissCommonDialogWithAnimated:withCloseType:withCompletion:;
- (id)initWithDialogHandler:withPlugin:;
- (void).cxx_destruct;
- (id)plugin;
- (void)setPlugin:;
@end
