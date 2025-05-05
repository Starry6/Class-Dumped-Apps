@interface VNClustererOptions : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString cachePath;
@property (nonatomic) NSData state;
@property (nonatomic) float threshold;
@property (nonatomic) float torsoThreshold;
@property (nonatomic) Q requestRevision;
@property (nonatomic) Q torsoprintRequestRevision;
- (float)threshold;
- (id)cachePath;
- (void)setState:;
- (void)setType:;
- (id)type;
- (unsigned long long)requestRevision;
- (id)state;
- (void).cxx_destruct;
- (void)setThreshold:;
- (void)setRequestRevision:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:;
- (id)initWithType:cachePath:state:threshold:requestRevision:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:torsoprintRequestRevision:;
- (id)initWithType:cachePath:state:threshold:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:;
- (void)setCachePath:;
- (float)torsoThreshold;
- (void)setTorsoThreshold:;
- (unsigned long long)torsoprintRequestRevision;
- (void)setTorsoprintRequestRevision:;
@end
