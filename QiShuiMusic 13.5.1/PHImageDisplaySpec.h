@interface PHImageDisplaySpec : NSObject
@property (nonatomic) {CGSize=dd} fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) q contentMode;
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedCropRect;
- (id)init;
- (id)shortDescription;
- (id)requestSizeFromFullSizedWidth:height:;
- (void)setFallbackTargetSizeIfRequestedSizeNotLocallyAvailable:;
- (id)initWithTargetSize:contentMode:normalizedCropRect:;
- (long long)contentMode;
- (void)setTargetSize:;
- (id)initWithTargetSize:contentMode:;
- (id)initWithTargetSize:;
- (id)fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
- (id)targetSize;
- (BOOL)hasExplicitCrop;
- (id)description;
- (void)setContentMode:;
- (void)setNormalizedCropRect:;
- (id)normalizedCropRect;
- (id)requestSizeFromFullSizedWidth:height:resizeMode:;
@end
