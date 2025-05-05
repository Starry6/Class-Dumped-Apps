@interface GEORouteHypothesizerDelayer : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_startValidHypothesizers;
- (void)_setNextHypothesizer:;
- (void)delayStartOfHypothesizer:;
+ (void)checkin;
@end
