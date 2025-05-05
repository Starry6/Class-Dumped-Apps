@interface BWAudioFileSinkNode : BWFileSinkNode
- (void)dealloc;
- (unsigned long long)lastFileSize;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (id)initWithSinkID:;
- (void)didReachEndOfDataForInput:;
- (id)lastFileDuration;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
