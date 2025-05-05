@interface MTLSamplerDescriptor : NSObject
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) Q resourceIndex;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q minFilter;
@property (nonatomic) Q magFilter;
@property (nonatomic) Q mipFilter;
@property (nonatomic) Q maxAnisotropy;
@property (nonatomic) Q sAddressMode;
@property (nonatomic) Q tAddressMode;
@property (nonatomic) Q rAddressMode;
@property (nonatomic) Q borderColor;
@property (nonatomic) BOOL normalizedCoordinates;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) BOOL lodAverage;
@property (nonatomic) Q compareFunction;
@property (nonatomic) BOOL supportArgumentBuffers;
@property (nonatomic) NSString label;
- (BOOL)lodAverage;
- (void)setLodAverage:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
