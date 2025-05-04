@interface AWESwitchNetPushManager : NSObject
@property (nonatomic) NSHashTable plugins;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerCustomPlugin:;
- (void)unregisterCustomPlugin:;
- (id)init;
- (void)setPlugins:;
- (void).cxx_destruct;
- (id)plugins;
+ (BOOL)shouldShowSwitchNetPushView;
+ (void)showSwitchNetPushView;
+ (BOOL)shouldShowScene;
+ (id)sharedInstance;
@end
