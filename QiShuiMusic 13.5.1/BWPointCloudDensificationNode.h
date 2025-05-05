@interface BWPointCloudDensificationNode : BWNode
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)initWithConfiguration:;
@end
