@interface MPSGraphDepthwiseConvolution3DOpDescriptor : NSObject
@property (nonatomic) NSArray strides;
@property (nonatomic) NSArray dilationRates;
@property (nonatomic) NSArray paddingValues;
@property (nonatomic) Q paddingStyle;
@property (nonatomic) q channelDimensionIndex;
- (id)strides;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)paddingStyle;
- (void)setPaddingStyle:;
- (void)setStrides:;
- (id)dilationRates;
- (void)setDilationRates:;
- (id)paddingValues;
- (void)setPaddingValues:;
- (long long)channelDimensionIndex;
- (void)setChannelDimensionIndex:;
+ (id)descriptorWithStrides:dilationRates:paddingValues:paddingStyle:;
+ (id)descriptorWithPaddingStyle:;
@end
