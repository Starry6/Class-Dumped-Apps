@interface PHASESessionInterfaceImpl : NSObject
@property (nonatomic) <PHASESessionVolumeInterface> sessionVolumeInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)setClientStateOnSession:clientToken:modes:state:outDuckingInfo:;
- (BOOL)setClientStateFromCallbackOnSession:clientToken:modes:state:outDuckingInfo:;
- (BOOL)setInputMuteStateOnSession:clientToken:isMuted:;
- (BOOL)setInputMuteStateFromCallbackOnSession:clientToken:isMuted:;
- (BOOL)registerFadeClientsInAudioSessionBlock:;
- (BOOL)registerActivateAudioSessionBlock:;
- (id)sessionVolumeInterface;
- (id)initWithPhasePlatform:;
- (int)fadeClientsInSession:activating:fadeLevel:fadeTime:;
- (void)activateSession:activate:;
- (void)muteSession:mute:;
- (id)lazyInitSessionVolumeInterface;
@end
