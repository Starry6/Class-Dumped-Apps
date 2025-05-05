@interface SFWebpageStatusBarView : UIView
@property (nonatomic) {CGPoint=dd} hoverPoint;
@property (nonatomic) BOOL suppressShowingStatusBar;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)showStatusBar;
- (void).cxx_destruct;
- (id)_originForStatusBarContentView;
- (void)updateWithHoverEvent:;
- (void)hideStatusBar;
- (void)setHoverPoint:;
- (id)hoverPoint;
- (BOOL)suppressShowingStatusBar;
- (void)setSuppressShowingStatusBar:;
@end
