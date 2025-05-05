@interface ISAVPlayerLayer : AVPlayerLayer
@property (nonatomic) @? readyForDisplayChangeHandler;
- (id)init;
- (void)dealloc;
- (void)didChangeValueForKey:;
- (void)setBounds:;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)setReadyForDisplayChangeHandler:;
- (void)setWrappedPlayer:;
- (void)deferredDealloc;
- (id)readyForDisplayChangeHandler;
@end
