@interface AWEXPlaySDKSettingsPluginImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)xplay_objectForKeyPath:defaultValue:stable:;
+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;
@end
