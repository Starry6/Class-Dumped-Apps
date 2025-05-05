@interface CIAreaLogarithmicHistogram : CIAreaHistogram
@property (nonatomic) NSNumber inputMinimumStop;
@property (nonatomic) NSNumber inputMaximumStop;
- (id)outputImage;
- (id)inputMinimumStop;
- (void)setInputMinimumStop:;
- (id)inputMaximumStop;
- (void)setInputMaximumStop:;
+ (id)customAttributes;
@end
