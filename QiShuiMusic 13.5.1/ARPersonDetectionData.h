@interface ARPersonDetectionData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSArray detectedObjects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)detectedObjects;
- (void)setDetectedObjects:;
- (id)transformToCVPixelBuffer:depthBuffer:;
- (id)mergeOverlappingDetectionsWithThreshold:;
@end
