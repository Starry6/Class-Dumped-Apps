@interface ARObjectDetectionResultData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSArray detectedObjects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary tracingEntry;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)tracingEntry;
- (id)detectedObjects;
- (void)setDetectedObjects:;
@end
