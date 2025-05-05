@interface ToygerFrame : NSObject
@property (nonatomic) Q frameType;
@property (nonatomic) Q frameFormat;
@property (nonatomic) NSNumber dataLength;
@property (nonatomic) ^v baseAddress;
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) q orientation;
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)setBaseAddress:;
- (void)setFrameFormat:;
- (unsigned long long)frameFormat;
- (void)setDataLength:;
- (id)init;
- (id)dataLength;
- (id)sampleBuffer;
- (long long)orientation;
- (void)setWidth:;
- (double)height;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)baseAddress;
- (void)setOrientation:;
- (id)copyWithZone:;
- (void)setSampleBuffer:;
- (unsigned long long)frameType;
- (void)setFrameType:;
@end
