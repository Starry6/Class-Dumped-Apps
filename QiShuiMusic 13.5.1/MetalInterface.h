@interface MetalInterface : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)textureFromCVPixelBuffer:;
- (id)textureWithPixelData:format:;
- (id)textureWithWidth:height:format:usage:;
- (void)performVotingImage:outputTex:subBuffer:;
- (void)performAdaptiveBinarizationImage:output:sumTable:sumSqTable:;
@end
