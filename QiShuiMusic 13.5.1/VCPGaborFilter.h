@interface VCPGaborFilter : NSObject
- (void)dealloc;
- (id)initWithNumberOfScales:numOfOrientations:width:height:;
- (int)processWithFilterScaleIdx:orientIdx:srcImage:outImage:width:height:;
- (int)createGaborFilterKernel:sigmaX:sigmaY:lambda:thetaInDegree:phaseInDegree:;
@end
