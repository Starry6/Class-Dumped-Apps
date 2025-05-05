@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:;
- (int)submitForSampleBuffer:usingStorage:withSubmissionTime:workQueue:completionHandler:;
- (int)type;
- (int)propagateInferenceResultFrom:forMediaKey:to:;
- (id)initWithConfiguration:resourceProvider:;
- (int)preProcessOutputBuffer:forMediaKey:;
- (int)createInputTileFor:to:withInputs:atPosition:cmdBuffer:;
- (int)writeOutputFor:to:fromNetworkOutputTiles:withAdditionalPixelBuffers:withInputTilePixelBuffers:withInputFullPixelBuffers:atPosition:cmdBuffer:;
- (int)purgeIntermediateResources;
@end
