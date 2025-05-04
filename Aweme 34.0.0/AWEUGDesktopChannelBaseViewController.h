@interface AWEUGDesktopChannelBaseViewController : NSObject
@property (nonatomic) AWEUGDesktopChannelGuideUIConfigModel model;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEUGKitComponent component;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)sceneUniqueKey;
- (id)initWithModel:scene:enterFrom:component:;
- (void)setModel:;
- (id)sceneName;
- (void)show;
- (id)component;
- (id)model;
- (void).cxx_destruct;
- (void)setSceneName:;
@end
