@interface ABPK2DDetectionResults : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray detectedSkeletons;
@property (nonatomic) ABPK2DDetectionResult trackedDetectionResult;
@property (nonatomic) ABPK2DDetectionResult rawDetectionResult;
@property (nonatomic) ABPK2DDetectionResult alignedDetectionResult;
@property (nonatomic) double timestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setRawDetectionResult:;
- (id)alignedDetectionResult;
- (id)trackedDetectionResult;
- (void)setAlignedDetectionResult:;
- (void)setTrackedDetectionResult:;
- (id)rawDetectionResult;
- (id)detectedSkeletons;
- (void)setDetectedSkeletons:;
@end
