@interface TVLPlayerItemAccessLogABRSessionEvent : TVLPlayerItemLogEvent
@property (nonatomic) NSString currentResolution;
@property (nonatomic) q currentBitrate;
@property (nonatomic) NSString previousResolution;
@property (nonatomic) q previousBitrate;
@property (nonatomic) Q startupType;
@property (nonatomic) q switchCostInMilliseconds;
@property (nonatomic) q stallCount;
@property (nonatomic) q stallTime;
- (id)logInfo;
- (long long)previousBitrate;
- (void)setStartupType:;
- (long long)currentBitrate;
- (id)previousResolution;
- (void)setCurrentBitrate:;
- (void)setPreviousBitrate:;
- (void)setPreviousResolution:;
- (void)setStallCount:;
- (void)setStallTime:;
- (void)setSwitchCostInMilliseconds:;
- (long long)stallCount;
- (long long)stallTime;
- (unsigned long long)startupType;
- (long long)switchCostInMilliseconds;
- (void).cxx_destruct;
- (id)currentResolution;
- (void)setCurrentResolution:;
+ (id)ABRSessionWithStartupType:switchCostInMilliseconds:currentResolution:currentBitrate:previousResolution:previousBitrate:;
@end
