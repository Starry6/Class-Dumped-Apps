@interface AWEPluginRTCImpl : NSObject
@property (nonatomic) AWERTCEngine engine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMonitorLog:withType:;
- (void)rtcEngine:onConnectionStateChanged:;
- (void)rtcEngine:onError:;
- (void)rtcEngine:onFirstLocalAudioFrame:;
- (void)rtcEngine:onFirstRemoteAudioFrame:;
- (void)rtcEngine:onLocalAudioPropertiesReport:;
- (void)rtcEngine:onRemoteAudioPropertiesReport:totalRemoteVolume:;
- (void)rtcEngine:onUserStartAudioCapture:uid:;
- (void)rtcEngine:onUserStopAudioCapture:uid:;
- (void)rtcEngine:onWarning:;
- (id)createRtcEngine:cb:businessID:;
- (id)createRtcEngine:cb:;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
