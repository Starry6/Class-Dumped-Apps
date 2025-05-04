@interface AWEUGSceneDesktopBDXBridgeEventCenter : NSObject
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)desktopChannelGuideAlreadyShowWithScene:enterFrom:guideType:extraParams:config:;
- (void)desktopChannelGuideShowFailedWithScene:enterFrom:guideType:error:extraParams:;
- (void)registerUGDesktopBDXEventCenter;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
