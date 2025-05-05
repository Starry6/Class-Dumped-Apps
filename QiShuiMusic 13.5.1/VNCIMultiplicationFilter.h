@interface VNCIMultiplicationFilter : VNCIFilter
@property (nonatomic) NSNumber inputFactor1;
@property (nonatomic) NSNumber inputFactor2;
@property (nonatomic) NSNumber inputFactor3;
@property (nonatomic) NSNumber inputFactor4;
- (id)init;
- (void).cxx_destruct;
- (id)outputImage;
- (id)inputFactor1;
- (void)setInputFactor1:;
- (id)inputFactor2;
- (void)setInputFactor2:;
- (id)inputFactor3;
- (void)setInputFactor3:;
- (id)inputFactor4;
- (void)setInputFactor4:;
@end
