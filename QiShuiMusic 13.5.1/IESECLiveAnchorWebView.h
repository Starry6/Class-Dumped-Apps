@interface IESECLiveAnchorWebView : IESECLiveAnchorNavigationBaseView
@property (nonatomic) IESECLiveRoomContext roomContext;
@property (nonatomic) PuzzleHybridContainer webView;
@property (nonatomic) BOOL showTitleBar;
- (void)setRoomContext:;
- (id)initWithFrame:urlString:showTitleBar:roomContext:;
- (double)navbarHeight;
- (void)pop;
- (void)setWebView:;
- (id)webView;
- (void).cxx_destruct;
- (BOOL)showTitleBar;
- (void)setShowTitleBar:;
- (id)roomContext;
@end
