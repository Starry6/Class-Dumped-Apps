@interface GEORequestCounterStatistics : NSObject
@property (nonatomic) Q bytesTransmitted;
@property (nonatomic) Q bytesReceived;
@property (nonatomic) NSInteger durationCount;
@property (nonatomic) q durationUSecondsTotal;
@property (nonatomic) Q usedInterfaces;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countForResult:;
- (BOOL)isEqual:;
- (unsigned long long)bytesReceived;
- (void)incrementBytesTransmitted:;
- (void)incrementBytesReceived:;
- (void)incrementDuration:;
- (void)incrementCountForResult:;
- (void)addUsedInterfaces:;
- (unsigned long long)bytesTransmitted;
- (long long)durationUSecondsTotal;
- (int)durationCount;
- (unsigned long long)usedInterfaces;
+ (BOOL)supportsSecureCoding;
@end
