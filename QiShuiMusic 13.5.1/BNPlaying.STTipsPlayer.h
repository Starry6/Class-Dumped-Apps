@interface BNPlaying.STTipsPlayer : NSObject
- (void)audioPlayerDidFinishPlaying:successfully:;
- (void)audioPlayerDecodeErrorDidOccur:error:;
- (void)audioPlayerBeginInterruption:;
- (void)audioPlayerEndInterruption:withOptions:;
- (id)init;
- (void).cxx_destruct;
@end
