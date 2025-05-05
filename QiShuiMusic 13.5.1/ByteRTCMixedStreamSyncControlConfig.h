@interface ByteRTCMixedStreamSyncControlConfig : NSObject
@property (nonatomic) Q syncStrategy;
@property (nonatomic) NSString baseUserID;
@property (nonatomic) q maxCacheTimeMs;
@property (nonatomic) BOOL videoNeedSdkMix;
- (BOOL)videoNeedSdkMix;
- (long long)maxCacheTimeMs;
- (void)setBaseUserID:;
- (void)setMaxCacheTimeMs:;
- (void)setVideoNeedSdkMix:;
- (id)baseUserID;
- (id)init;
- (unsigned long long)syncStrategy;
- (void)setSyncStrategy:;
- (void).cxx_destruct;
@end
