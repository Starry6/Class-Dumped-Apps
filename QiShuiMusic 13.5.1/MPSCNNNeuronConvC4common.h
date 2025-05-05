@interface MPSCNNNeuronConvC4common : MPSCNNKernel
- (void)encodeToCommandBuffer:sourceImage:weightImage:biasmage:destinationImage:reluFlag:reluType:reluMax:reluSlope:inHeight:inWidth:inChannelBlocks:outHeight:outWidth:kernelH:kernelW:strideH:strideW:padT:padL:dilationH:dilationW:biasFlag:widthBlocks:conv_outh:conv_outw:conv_outc:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
