@interface PHCropVariant : NSObject
@property (nonatomic) double aspectRatio;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double cropScore;
@property (nonatomic) q cropType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
- (double)scaleFactor;
- (id)cropRect;
- (double)aspectRatio;
- (id)initWithCrop:cropType:scaleFactor:cropScore:;
- (double)cropScore;
- (long long)cropType;
@end
