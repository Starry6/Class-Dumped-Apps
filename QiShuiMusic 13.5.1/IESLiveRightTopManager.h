@interface IESLiveRightTopManager : NSObject
@property (nonatomic) IESLiveRightTopMutuallyExclusiveItem currentItem;
@property (nonatomic) BOOL inCleanMode;
- (void)cleanContainer:;
- (void)setInCleanMode:;
- (void)closeRightTopViewWithItem:processResult:;
- (BOOL)couldShowItem:;
- (BOOL)inCleanMode;
- (void)showRightTopView:;
- (void)showRightTopViewWithItem:processResult:;
- (id)init;
- (void)setCurrentItem:;
- (id)currentItem;
- (void).cxx_destruct;
@end
