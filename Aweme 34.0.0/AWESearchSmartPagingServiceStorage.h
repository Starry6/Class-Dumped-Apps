@interface AWESearchSmartPagingServiceStorage : NSObject
@property (nonatomic) @ featureCacheInfo;
@property (nonatomic) double updateTimestamp;
- (void)resetUpdateTimeStamp;
- (id)featureCacheInfo;
- (void)setFeatureCacheInfo:;
- (void)storeFeatureInfo:;
- (id)fetchFeatureInfo;
- (void).cxx_destruct;
- (double)updateTimestamp;
- (void)setUpdateTimestamp:;
@end
