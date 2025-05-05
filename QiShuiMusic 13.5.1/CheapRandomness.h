@interface CheapRandomness : CIFilter
@property (nonatomic) NSNumber inputDither;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)outputImage;
- (id)inputDither;
- (void)setInputDither:;
@end
