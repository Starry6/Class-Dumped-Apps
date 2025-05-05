@interface VCPSideCarMetal : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setPacketLayout:;
- (int)selectGPUForFrame:;
- (id)compileFunction:constantValues:;
- (id)compileFunction:;
- (void)compileTransitionDetection;
- (void)compileDeblockForFrame:;
- (id)unormTexture:forPlane:withAttributes:;
- (id)uintTexture:forPlane:withAttributes:;
- (id)rgbaUnormTextureForLuma:withAttributes:;
- (id)rgbaUintTextureForLuma:withAttributes:;
- (id)rgbaUintTextureForChroma:withAttributes:;
- (id)temporalTransitionScore:previousFrame:forRegion:;
- (int)subframeDeblock:withOffsetsY:numEdges:;
- (int)copyFromFrame:toTile:origin:size:withFence:;
- (int)copySubframe:toFrame:atOffset:;
- (id)createEncodePacket:forRegion:instance:sequenceNumber:frameIndex:pts:duration:frameProperties:;
@end
