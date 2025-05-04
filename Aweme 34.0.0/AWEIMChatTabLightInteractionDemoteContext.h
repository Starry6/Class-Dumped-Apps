@interface AWEIMChatTabLightInteractionDemoteContext : NSObject
@property (nonatomic) q globalIndex;
@property (nonatomic) q remainingExposedCount;
@property (nonatomic) double exposedInterval;
@property (nonatomic) BOOL shouldCheckExposed;
@property (nonatomic) NSMutableArray exposedTimestampArray;
- (long long)globalIndex;
- (long long)remainingExposedCount;
- (void)setRemainingExposedCount:;
- (void)setExposedInterval:;
- (void)setExposedTimestampArray:;
- (id)initWithGlobalIndex:;
- (BOOL)shouldCheckExposed;
- (void)setShouldCheckExposed:;
- (double)exposedInterval;
- (id)exposedTimestampArray;
- (void)setGlobalIndex:;
- (void).cxx_destruct;
@end
