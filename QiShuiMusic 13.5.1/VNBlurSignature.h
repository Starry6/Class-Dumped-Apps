@interface VNBlurSignature : NSObject
- (void)dealloc;
- (void)setSignatureData:;
- (id)initWithSignatureData:;
- (id)getSignatureData;
+ (id)computeBlurSignatureForGrayscaleImage:error:;
@end
