@interface AWECommentCellViewModel : NSObject
- (void)preCalculate;
- (void)renderOn:;
- (void)setCommentCellTextConfig:;
- (id)cellSize;
- (void)componentContainer:changeBoundsToSize:;
- (void)componentTree:changeBoundsToSize:;
- (void)onAWEUIThemeChange;
- (void)addDebugView;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
