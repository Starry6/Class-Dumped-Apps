@interface ARImageAnchor : ARAnchor
@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) ARReferenceImage referenceImage;
@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithAnchor:;
- (id)referenceImage;
- (void)setDetectionOnly:;
- (BOOL)isTracked;
- (id)copyWithTrackedState:;
- (void)setIsTracked:;
- (double)estimatedScaleFactor;
- (void)setEstimatedScaleFactor:;
- (id)initWithReferenceImage:transform:detectionOnly:tracked:;
- (BOOL)isDetectionOnly;
+ (BOOL)supportsSecureCoding;
@end
