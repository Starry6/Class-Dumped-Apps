@interface AWEECMallDesktopChannelGuideManager : NSObject
@property (nonatomic) NSString sceneType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (void)registerUGDesktopChannelGuideScene;
- (void)showMallHomePageDesktopChannelGuide;
- (id)init;
- (id)position;
- (void).cxx_destruct;
- (id)sceneType;
- (void)setSceneType:;
- (id)tabID;
+ (id)sharedInstance;
@end
