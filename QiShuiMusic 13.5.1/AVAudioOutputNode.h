@interface AVAudioOutputNode : AVAudioIONode
- (unsigned int)manualRenderingMaximumFrameCount;
- (BOOL)setManualRenderingPCMFormat:maximumFrameCount:;
- (id)manualRenderingFormat;
@end
