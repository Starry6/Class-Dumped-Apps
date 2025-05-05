@interface VCPLandmarkValidator : NSObject
@property (nonatomic) ^f orientation;
- (void)dealloc;
- (id)orientation;
- (void).cxx_destruct;
- (void)setOrientation:;
- (id)initWithModelFile:paramFile:numTri:triList:angle:;
- (int)validateOneImage:landmarks:numofLandmarks:score:;
@end
