@interface AWEHamletImpl.RTCWrapper : NSObject
- (void)rtcRoom:onLeaveRoom:;
- (void)rtcRoom:onNetworkQuality:remoteQualities:;
- (void)rtcRoom:onRoomStateChangedWithReason:withUid:state:reason:;
- (void)rtcRoom:onUserJoined:;
- (void)rtcRoom:onUserLeave:reason:;
- (void)rtcRoom:onUserPublishScreenAudio:uid:isPublish:;
- (void)rtcEngine:onError:;
- (void)rtcEngine:onFirstLocalAudioFrame:;
- (void)rtcEngine:onFirstRemoteAudioFrame:;
- (void)rtcEngine:onLocalAudioPropertiesReport:;
- (void)rtcEngine:onUserStartAudioCapture:uid:;
- (void)rtcEngine:onUserStopAudioCapture:uid:;
- (void)rtcEngine:onWarning:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
