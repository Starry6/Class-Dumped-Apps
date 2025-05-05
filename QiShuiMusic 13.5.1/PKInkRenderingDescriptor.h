@interface PKInkRenderingDescriptor : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q blendMode;
@property (nonatomic) PKInkParticleDescriptor particleDescriptor;
@property (nonatomic) PKInkParticleDescriptor secondaryParticleDescriptor;
- (id)mutableCopy;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)blendMode;
- (id)initWithType:blendMode:particleDescriptor:secondaryParticleDescriptor:;
- (id)particleDescriptor;
- (id)secondaryParticleDescriptor;
@end
