@interface VCPVideoActivityDescriptor : NSObject
@property (nonatomic) ^f descriptors;
- (id)descriptors;
- (void)dealloc;
- (void)reset;
- (id)initWithFrameWidthInMb:heightInMb:;
- (void)ExtractActivityDescriptorFromStats:;
- (void)spatialDescriptorWithMvMagnitudeMean:;
@end
