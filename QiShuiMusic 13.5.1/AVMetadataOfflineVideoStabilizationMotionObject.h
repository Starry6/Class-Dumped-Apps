@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTime:motionDictionary:input:;
+ (id)offlineVideoStabilizationMotionObjectWithTime:motionDictionary:input:;
@end
