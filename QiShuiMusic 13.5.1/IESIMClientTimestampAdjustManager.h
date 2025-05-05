@interface IESIMClientTimestampAdjustManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
@property (nonatomic) q staticTimestampDeltaCount;
@property (nonatomic) q totalStaticTimestampDelta;
@property (nonatomic) q avgStaticTimestampDelta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)avgStaticTimestampDelta;
- (long long)currentClientTimestampDelta;
- (void)didReceiveTimestamp:;
- (void)setAvgStaticTimestampDelta:;
- (void)setStaticTimestampDeltaCount:;
- (void)setTotalStaticTimestampDelta:;
- (long long)staticTimestampDeltaCount;
- (long long)totalStaticTimestampDelta;
- (id)init;
- (void)setSem:;
- (void).cxx_destruct;
- (id)sem;
+ (id)sharedInstance;
@end
