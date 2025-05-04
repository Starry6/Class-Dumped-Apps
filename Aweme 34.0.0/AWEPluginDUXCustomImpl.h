@interface AWEPluginDUXCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showDUXDialogWithUniqueID:title:icon:desc:confirmBlock:cancelBlock:;
- (void)showLaunchAppDUXDialogWithUniqueID:title:desc:confirmBlock:cancelBlock:;
- (unsigned long long)bdp_fontMode;
+ (id)sharedPlugin;
@end
