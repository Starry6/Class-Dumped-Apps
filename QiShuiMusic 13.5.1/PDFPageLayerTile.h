@interface PDFPageLayerTile : CALayer
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rootViewFrame;
- (void)dealloc;
- (void).cxx_destruct;
- (void)hasStartedWork;
- (void)recievePDFTileSurface:;
- (id)initWithFrame:forPageLayer:withRenderingTransform:tileContentsScale:generationID:;
- (BOOL)isWorking;
- (id)rootViewFrame;
- (void)setRootViewFrame:;
@end
