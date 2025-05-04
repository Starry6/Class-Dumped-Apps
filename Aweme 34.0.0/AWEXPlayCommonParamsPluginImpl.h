@interface AWEXPlayCommonParamsPluginImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)xplay_appId;
- (id)xplay_appVersion;
- (id)xplay_appChannel;
- (id)xplay_deviceId;
- (id)xplay_userId;
+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;
@end
