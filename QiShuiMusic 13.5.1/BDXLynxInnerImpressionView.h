@interface BDXLynxInnerImpressionView : UIView
@property (nonatomic) <BDXLynxInnerImpressionViewDelegate> delegate;
@property (nonatomic) BOOL onScreen;
@property (nonatomic) float impressionPercent;
- (float)impressionPercent;
- (void)setImpressionPercent:;
- (BOOL)onScreen;
- (void)setDelegate:;
- (void)exit;
- (id)delegate;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)impression;
@end
