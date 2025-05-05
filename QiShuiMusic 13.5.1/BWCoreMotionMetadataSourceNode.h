@interface BWCoreMotionMetadataSourceNode : BWSourceNode
@property (nonatomic) ^{opaqueCMFormatDescription=} formatDescription;
- (BOOL)stop:;
- (id)formatDescription;
- (id)clock;
- (BOOL)start:;
- (void)dealloc;
- (id)nodeSubType;
- (id)initWithBufferGenerationRate:samplesPerBuffer:;
+ (int)extractBWCoreMotionMetadataFromBlockBuffer:intoNativeEndianSampleData:;
+ (int)extractBWCoreMotionMetadataFromSampleBuffer:intoNativeEndianSampleData:;
@end
