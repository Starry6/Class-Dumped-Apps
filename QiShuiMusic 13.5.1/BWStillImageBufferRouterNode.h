@interface BWStillImageBufferRouterNode : BWNode
@property (nonatomic) BWNodeOutput defaultOutput;
@property (nonatomic) BWNodeOutput HDROutput;
@property (nonatomic) BWNodeOutput SISOutput;
@property (nonatomic) BWNodeOutput bravoTelephotoOutput;
@property (nonatomic) BWNodeOutput pearlInfraredOutput;
- (id)inputForPortType:;
- (id)bravoTelephotoOutput;
- (void)dealloc;
- (void)handleStillImagePrewarmWithSettings:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (id)HDROutput;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (id)pearlInfraredOutput;
- (id)initWithInputPortTypes:HDRSupported:SISSupported:GNRSISSupported:LTMHDRSupported:depthDataDeliveryEnabled:;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)SISOutput;
- (id)defaultOutput;
- (id)nodeSubType;
@end
