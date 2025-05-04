@interface AWEInnerPushExitActionInfo : MTLModel
@property (nonatomic) q actionCount;
@property (nonatomic) double lastHiddenTimestamp;
- (double)lastHiddenTimestamp;
- (void)setLastHiddenTimestamp:;
- (long long)actionCount;
- (void)setActionCount:;
@end
