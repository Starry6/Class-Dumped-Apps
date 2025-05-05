@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig
@property (nonatomic) VCSessionUplinkBandwidthAllocator uplinkBandwidthAllocator;
@property (nonatomic) BOOL shouldSynchronizeWithSourceRTPTimestamps;
- (void)dealloc;
- (id)uplinkBandwidthAllocator;
- (void)setUplinkBandwidthAllocator:;
- (BOOL)shouldSynchronizeWithSourceRTPTimestamps;
- (void)setShouldSynchronizeWithSourceRTPTimestamps:;
@end
