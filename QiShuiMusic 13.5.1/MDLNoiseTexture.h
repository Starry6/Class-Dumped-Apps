@interface MDLNoiseTexture : MDLTexture
- (id)generateDataAtLevel:selector:;
- (id)_generateCellularNoiseAtLevel:selector:;
- (id)initVectorNoiseWithSmoothness:name:textureDimensions:channelEncoding:;
- (id)initScalarNoiseWithSmoothness:name:textureDimensions:channelCount:channelEncoding:grayscale:;
- (id)initCellularNoiseWithFrequency:name:textureDimensions:channelEncoding:;
@end
