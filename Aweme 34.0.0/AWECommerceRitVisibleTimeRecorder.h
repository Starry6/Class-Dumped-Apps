@interface AWECommerceRitVisibleTimeRecorder : NSObject
@property (nonatomic) double lastShowTime;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL visible;
- (double)showDuration;
- (void)setShowDuration:;
- (void)setLastShowTime:;
- (double)lastShowTime;
- (void)recordVisible;
- (void)recordInvisible;
- (double)calculateVisibleTime;
- (BOOL)visible;
- (void)setVisible:;
- (void)reset;
@end
