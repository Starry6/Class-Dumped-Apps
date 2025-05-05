@interface BWPortraitHDRStagingNode : BWNode
- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (void)bufferReceivedWithFlags:error:;
@end
