@interface CSJDynamicSkipWithTimeView : CSJDynamicAbstractView
@property (nonatomic) BOOL interceptGestureEnable;
@property (nonatomic) NSString skipText;
- (double)skipControlWith;
- (void)adjust_buDynamic_frameIfNeed;
- (BOOL)interceptGestureEnable;
- (void)setInterceptGestureEnable:;
- (void)setSkipText:;
- (id)skipText;
- (id)skipTextSize;
- (void)updateOriginXIfNeed;
- (void)videoStateUpdateWithPlayDuration:stopped:;
- (void)viewAction:;
- (void).cxx_destruct;
- (void)render;
@end
