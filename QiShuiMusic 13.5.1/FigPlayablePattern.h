@interface FigPlayablePattern : NSObject
@property (nonatomic) <CHHapticAdvancedPatternPlayerExtended> player;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} outputTimeRange;
- (id)timeRange;
- (void)dealloc;
- (void)setTimeRange:;
- (id)player;
- (void)setPlayer:;
- (id)initWithSBuf:chEngine:;
- (id)outputTimeRange;
- (void)setOutputTimeRange:;
@end
