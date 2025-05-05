@interface ARBodyAnchor : ARAnchor
@property (nonatomic) ARBody2D referenceBody;
@property (nonatomic) ARSkeleton3D skeleton;
@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skeleton;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithAnchor:;
- (BOOL)isTracked;
- (id)copyWithTrackedState:;
- (double)estimatedScaleFactor;
- (id)initWithIdentifier:transform:tracked:skeletonData:;
- (id)referenceBody;
- (BOOL)isEqualToARBodyAnchor:;
+ (BOOL)supportsSecureCoding;
@end
