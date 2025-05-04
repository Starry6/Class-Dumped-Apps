@interface AWEECMallGurdUpdateListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)showDebugToast:;
+ (id)shareManager;
+ (id)mallLynxChannel;
+ (void)startGurdMallChannelUpdateListen;
@end
