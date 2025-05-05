@interface PLAdjustmentVirtualResource : PLVirtualResource
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSNumber cachedDataLength;
- (long long)dataLength;
- (id)lock;
- (void).cxx_destruct;
- (long long)estimatedDataLength;
- (void)setLock:;
- (id)initWithAdjustmentFilePath:forAsset:;
- (id)adjustmentDictionary;
- (id)cachedDataLength;
- (void)setCachedDataLength:;
@end
