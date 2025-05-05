@interface BDImageCropConfig : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} defaultCropRect;
@property (nonatomic) BOOL usingDefaultCropRect;
@property (nonatomic) BOOL usingViewBasedCropRect;
@property (nonatomic) double maxCropAreaRatio;
@property (nonatomic) {CGSize=dd} viewSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} customCropRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
- (id)defaultCropRect;
- (id)customCropRect;
- (void)generatingDefaultCropRectIfNeededForImageData:;
- (double)maxCropAreaRatio;
- (void)setCustomCropRect:;
- (void)setDefaultCropRect:;
- (void)setMaxCropAreaRatio:;
- (void)setUsingDefaultCropRect:;
- (void)setUsingViewBasedCropRect:;
- (BOOL)usingDefaultCropRect;
- (BOOL)usingInternalCropRect;
- (BOOL)usingViewBasedCropRect;
- (id)init;
- (id)cropRect;
- (id)viewSize;
- (id)copyWithZone:;
- (void)setViewSize:;
+ (id)centralCropRectBaseOnViewSize:imageSize:maxCropAreaRatio:;
+ (id)centralCropRectForViewSize:imageSize:;
+ (id)cropImageOriginalSizeForData:;
@end
