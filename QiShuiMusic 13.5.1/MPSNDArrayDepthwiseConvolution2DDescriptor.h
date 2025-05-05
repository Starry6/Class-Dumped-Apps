@interface MPSNDArrayDepthwiseConvolution2DDescriptor : MPSNDArrayConvolution2DDescriptor
@property (nonatomic) Q channelMultiplier;
- (id)init;
- (unsigned long long)channelMultiplier;
- (void)setChannelMultiplier:;
@end
