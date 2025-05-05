@interface FigCaptureSessionPreparedBracket : NSObject
@property (nonatomic) I outputFormat;
@property (nonatomic) {?=ii} outputDimensions;
@property (nonatomic) I imageCount;
@property (nonatomic) NSInteger colorSpaceProperties;
- (unsigned int)outputFormat;
- (void)setOutputFormat:;
- (int)colorSpaceProperties;
- (void)setOutputDimensions:;
- (unsigned int)imageCount;
- (id)outputDimensions;
- (void)setImageCount:;
- (void)setColorSpaceProperties:;
@end
