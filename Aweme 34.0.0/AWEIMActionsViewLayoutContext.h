@interface AWEIMActionsViewLayoutContext : NSObject
@property (nonatomic) q orientation;
@property (nonatomic) q numberOfActions;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) double visibleWidth;
@property (nonatomic) double minimumButtonWidth;
- (void)setMinimumButtonWidth:;
- (double)minimumButtonWidth;
- (void)setContentSize:;
- (void)setOrientation:;
- (id)contentSize;
- (long long)orientation;
- (long long)numberOfActions;
- (void)setNumberOfActions:;
- (void)setVisibleWidth:;
- (double)visibleWidth;
@end
