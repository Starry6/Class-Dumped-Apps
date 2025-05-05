@interface ARWorldTrackingFeaturePointData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ARPointCloud visionFeaturePoints;
@property (nonatomic) ARPointCloud featurePoints;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)initWithTimestamp:;
- (BOOL)isEqual:;
- (id)featurePoints;
- (void)setFeaturePoints:;
- (void)setVisionFeaturePoints:;
- (id)visionFeaturePoints;
+ (BOOL)supportsSecureCoding;
@end
