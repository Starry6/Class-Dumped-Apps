@interface AXElementVision__generated__Input : NSObject
@property (nonatomic) ^{__CVBuffer=} image;
@property (nonatomic) double iouThreshold;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (void)setImage:;
- (id)featureNames;
- (id)image;
- (double)confidenceThreshold;
- (void)setConfidenceThreshold:;
- (double)iouThreshold;
- (void)setIouThreshold:;
- (id)initWithImage:iouThreshold:confidenceThreshold:;
@end
