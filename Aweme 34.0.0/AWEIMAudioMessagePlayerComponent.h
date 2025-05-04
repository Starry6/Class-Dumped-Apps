@interface AWEIMAudioMessagePlayerComponent : AWEIMComponentBase
@property (nonatomic) AWEBinding autoPlayBind;
@property (nonatomic) AWEBinding startPlayBind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)interruptCurrentAudioMessagePlayer;
- (void)bindAudioMessageDidPlayWithCallback:;
- (void)componentDidMounted:;
- (void)setAutoPlayAfterDownloadFinishVM:;
- (id)autoPlayBind;
- (void)setAutoPlayBind:;
- (id)startPlayBind;
- (void)setStartPlayBind:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
