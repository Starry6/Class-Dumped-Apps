@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject
@property (nonatomic) C policy;
@property (nonatomic) NSDate startTimestamp;
@property (nonatomic) NSDate endTimestamp;
@property (nonatomic) Q tilesConsidered;
@property (nonatomic) Q successCount;
@property (nonatomic) Q failureCount;
@property (nonatomic) Q bytesDownloaded;
- (unsigned long long)bytesDownloaded;
- (id)endTimestamp;
- (unsigned long long)failureCount;
- (unsigned char)policy;
- (id)startTimestamp;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPolicy:startTimestamp:endTimestamp:tilesConsidered:successCount:failureCount:bytesDownloaded:;
- (unsigned long long)tilesConsidered;
- (unsigned long long)successCount;
+ (BOOL)supportsSecureCoding;
@end
