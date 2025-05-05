@interface CIBurstYUVImage : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger bytesPerRow;
@property (nonatomic) * Ybuffer;
@property (nonatomic) * Cbuffer;
- (void)dealloc;
- (id)pixelBuffer;
- (void)setWidth:;
- (int)height;
- (int)width;
- (void)setHeight:;
- (int)bytesPerRow;
- (void)convertRGBAToYUV420:rgbaBytesPerRow:;
- (id)initWithCGImage:maxDimension:;
- (id)initWithCIImage:ctx:maxDimension:;
- (id)initWithIOSurface:maxDimension:;
- (char *)Ybuffer;
- (void)setYbuffer:;
- (char *)Cbuffer;
- (void)setCbuffer:;
- (void)setBytesPerRow:;
@end
