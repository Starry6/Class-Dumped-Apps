@interface LynxListContainerView : LynxScrollView
@property (nonatomic) LynxUIContext context;
@property (nonatomic) q sign;
@property (nonatomic) BOOL scrollToLower;
@property (nonatomic) BOOL verticalOrientation;
@property (nonatomic) double scrollEstimatedOffset;
- (double)scrollEstimatedOffset;
- (BOOL)scrollToLower;
- (void)setScrollEstimatedOffset:;
- (void)setScrollToLower:;
- (void)setSign:;
- (void)setVerticalOrientation:;
- (long long)sign;
- (BOOL)verticalOrientation;
- (void)setContentOffset:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
