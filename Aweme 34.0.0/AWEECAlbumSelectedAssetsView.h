@interface AWEECAlbumSelectedAssetsView : CAKAlbumSelectedAssetsView
@property (nonatomic) UIView tipBarView;
@property (nonatomic) BOOL isTipBarClosed;
@property (nonatomic) @? closeTipBarBlock;
@property (nonatomic) NSString customTips;
@property (nonatomic) BOOL newStyle;
- (BOOL)newStyle;
- (void)setNewStyle:;
- (void)setCustomTips:;
- (id)customTips;
- (void)setupTipBarView;
- (id)tipBarView;
- (void)closeTipBarAction;
- (void)setIsTipBarClosed:;
- (id)closeTipBarBlock;
- (void)reloadSelectView;
- (BOOL)isTipBarClosed;
- (void)setCloseTipBarBlock:;
- (void)setTipBarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
