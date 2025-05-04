@interface AWELiveLeaveSceneDesktopEvadeManager : NSObject
@property (nonatomic) NSString sceneType;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (void).cxx_destruct;
- (id)sceneType;
- (void)setSceneType:;
+ (id)sharedInstance;
@end
