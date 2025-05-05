@interface AXMediaUtilities.AXBoundingBox : NSObject
@property (nonatomic) NSString description;
- (id)init;
- (void).cxx_destruct;
- (id)description;
+ (id)postComputeWithDecoded:nmsThreshold:filterThresholds:;
+ (id)postComputeClickabilityWithDecoded:nmsThreshold:filterThresholds:;
@end
