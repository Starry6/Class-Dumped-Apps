@interface JasperDepthFrameProcessor : NSObject
@property (nonatomic) JDDepthProcessor jdProc;
- (id)process:;
- (void).cxx_destruct;
- (id)initWithCalibrationDict:;
- (id)jdProc;
- (void)setJdProc:;
@end
