@interface ADStreamSyncTimestampedObject : NSObject
@property (nonatomic) @ data;
@property (nonatomic) @ metadata;
@property (nonatomic) double midExposureTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) {?=[4]} pose;
- (id)data;
- (id)metadata;
- (void)setMetadata:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setData:;
- (id)pose;
- (void)setPose:;
- (double)midExposureTimestamp;
- (void)setMidExposureTimestamp:;
@end
