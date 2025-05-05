@interface AVAudioPlayerNode : AVAudioNode
@property (nonatomic) BOOL playing;
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isPlaying;
- (void)play;
- (void)didAttachToEngine:;
- (void)stop;
- (void)pause;
- (void)scheduleBuffer:atTime:options:completionHandler:;
- (void)scheduleBuffer:completionHandler:;
- (void)playAtTime:;
- (void)scheduleFile:atTime:completionHandler:;
- (void)callLegacyCompletionHandlerForType:legacyHandler:;
- (void)scheduleBuffer:completionCallbackType:completionHandler:;
- (void)scheduleBuffer:atTime:options:completionCallbackType:completionHandler:;
- (void)scheduleFile:atTime:completionCallbackType:completionHandler:;
- (void)scheduleSegment:startingFrame:frameCount:atTime:completionHandler:;
- (void)scheduleSegment:startingFrame:frameCount:atTime:completionCallbackType:completionHandler:;
- (void)prepareWithFrameCount:;
- (id)nodeTimeForPlayerTime:;
- (id)playerTimeForNodeTime:;
@end
