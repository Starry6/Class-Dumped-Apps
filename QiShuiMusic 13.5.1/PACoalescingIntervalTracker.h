@interface PACoalescingIntervalTracker : NSObject
@property (nonatomic) PAAccessLogger logger;
@property (nonatomic) double intervalEndTime;
@property (nonatomic) BOOL collectAssetIdentifiers;
- (id)logger;
- (void)dealloc;
- (void)coalesce:;
- (BOOL)collectAssetIdentifiers;
- (void)setIntervalEndTime:;
- (double)intervalEndTime;
- (void)expireIntervalWithMatcher:state:;
- (void).cxx_destruct;
- (void)setCollectAssetIdentifiers:;
- (void)invalidate;
- (id)initWithLogger:;
@end
