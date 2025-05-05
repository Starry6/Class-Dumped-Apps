@interface IESLivePlayerScaleConfig : NSObject
@property (nonatomic) BOOL needRightPanelMask;
@property (nonatomic) BOOL needTopSafeArea;
@property (nonatomic) UIColor rightPanelBackgroundColor;
@property (nonatomic) BOOL needLeftTopAndBottomCorner;
@property (nonatomic) double panelCustomWidth;
@property (nonatomic) double showAnimationDuration;
@property (nonatomic) double closeAnimationDuration;
@property (nonatomic) BOOL acceptCloseFromPuzzleEnable;
- (BOOL)needTopSafeArea;
- (void)setAcceptCloseFromPuzzleEnable:;
- (BOOL)acceptCloseFromPuzzleEnable;
- (double)closeAnimationDuration;
- (BOOL)needLeftTopAndBottomCorner;
- (BOOL)needRightPanelMask;
- (double)panelCustomWidth;
- (id)rightPanelBackgroundColor;
- (void)setCloseAnimationDuration:;
- (void)setNeedLeftTopAndBottomCorner:;
- (void)setNeedRightPanelMask:;
- (void)setNeedTopSafeArea:;
- (void)setPanelCustomWidth:;
- (void)setRightPanelBackgroundColor:;
- (void)setShowAnimationDuration:;
- (double)showAnimationDuration;
- (id)init;
- (void).cxx_destruct;
@end
