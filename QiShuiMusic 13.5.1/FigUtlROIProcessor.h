@interface FigUtlROIProcessor : NSObject
@property (nonatomic) {?=[3]} originalToRoiMatrix;
@property (nonatomic) {?=[3]} roiToOriginalMatrix;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} roiRectangle;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (void)dealloc;
- (id)pixelBuffer;
- (int)height;
- (int)width;
- (void).cxx_destruct;
- (id)originalToRoi:;
- (id)originalToRoiPixels:;
- (id)roiToOriginal:;
- (id)roiToOriginalPixels:;
- (id)initWithWidth:height:pixelFormat:;
- (BOOL)processImage:orientation:rect:;
- (id)originalToRoiMatrix;
- (id)roiToOriginalMatrix;
- (id)roiRectangle;
@end
