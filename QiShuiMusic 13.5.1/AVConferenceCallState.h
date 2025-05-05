@interface AVConferenceCallState : NSObject
@property (nonatomic) BOOL audioIsPaused;
@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) BOOL isAudioSending;
@property (nonatomic) VCCapabilities capabilities;
- (void)setCapabilities:;
- (void)dealloc;
- (id)capabilities;
- (BOOL)isAudioPaused;
- (BOOL)isVideoPaused;
- (void)setAudioIsPaused:;
- (void)setIsVideoPaused:;
- (BOOL)isAudioSending;
- (void)setIsAudioSending:;
@end
