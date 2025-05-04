@interface AWEIMInteractiveRedPacketComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)enableOpenInteractiveRedpacketDirectly:conversationID:;
- (void)openRedPacketAndSendMessageWithInput:completion:;
- (id)p_makeResponse:;
- (void)p_openRedPacketDidFinished:;
- (void)handleAudioUploadAndSendWithInputModel:openMode:completion:;
- (void)handleMediaProcessWithInputModel:openMode:completion:;
- (void)p_nlpAudio:completion:;
- (void)p_sendAudioMessage:completion:;
- (void)p_storeOpenFailedData:;
- (void)p_trackWithModeIfNeededl:;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
