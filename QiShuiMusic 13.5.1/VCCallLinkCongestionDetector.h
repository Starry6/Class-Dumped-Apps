@interface VCCallLinkCongestionDetector : NSObject
@property (nonatomic) BOOL isLinkCongested;
- (id)initWithRTTThreshold:lossRateThreshold:;
- (void)addNewRTT:packetLossRate:timestamp:;
- (BOOL)isLinkCongested;
- (void)setIsLinkCongested:;
@end
