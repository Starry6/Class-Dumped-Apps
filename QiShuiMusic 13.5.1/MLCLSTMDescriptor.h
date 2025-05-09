@interface MLCLSTMDescriptor : NSObject
@property (nonatomic) Q inputSize;
@property (nonatomic) Q hiddenSize;
@property (nonatomic) Q layerCount;
@property (nonatomic) BOOL usesBiases;
@property (nonatomic) BOOL batchFirst;
@property (nonatomic) BOOL isBidirectional;
@property (nonatomic) BOOL returnsSequences;
@property (nonatomic) float dropout;
@property (nonatomic) Q resultMode;
- (BOOL)bias;
- (unsigned long long)hash;
- (unsigned long long)inputSize;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)layerCount;
- (unsigned long long)numberOfLayers;
- (BOOL)isBidirectional;
- (id)initWithInputSize:hiddenSize:layerCount:usesBiases:batchFirst:isBidirectional:returnsSequences:dropout:resultMode:;
- (unsigned long long)hiddenSize;
- (BOOL)usesBiases;
- (BOOL)batchFirst;
- (BOOL)returnsSequences;
- (float)dropout;
- (unsigned long long)resultMode;
+ (id)descriptorWithInputSize:hiddenSize:layerCount:usesBiases:isBidirectional:dropout:;
+ (id)descriptorWithInputSize:hiddenSize:layerCount:usesBiases:batchFirst:isBidirectional:returnsSequences:dropout:resultMode:;
+ (id)descriptorWithInputSize:hiddenSize:layerCount:;
+ (id)descriptorWithInputSize:hiddenSize:layerCount:usesBiases:batchFirst:isBidirectional:dropout:;
+ (id)descriptorWithInputSize:hiddenSize:layerCount:usesBiases:batchFirst:isBidirectional:returnsSequences:dropout:;
@end
