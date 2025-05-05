@interface RPConnectionMetrics : NSObject
@property (nonatomic) NSMutableDictionary metrics;
- (id)init;
- (void)setMetrics:;
- (id)metrics;
- (void).cxx_destruct;
- (void)reportMetrics;
- (unsigned char)lengthToBucketIndex:;
- (unsigned char)rttToBucketIndex:;
- (unsigned char)linkTypeToBucketIndex:;
- (void)logRequestOnLinkType:length:rtt:;
+ (id)sharedMetrics;
@end
