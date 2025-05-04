@interface AWEOfflineVideoCenterCurrentDownloadingHeaderView : UICollectionReusableView
@property (nonatomic) DUXButton button;
@property (nonatomic) @? clickAction;
@property (nonatomic) BOOL isPauseStyle;
- (id)clickAction;
- (void)setClickAction:;
- (void)setupSetupView;
- (BOOL)isPauseStyle;
- (void)buttonClickAction;
- (void)setIsPauseStyle:;
- (id)initWithFrame:;
- (void)setButton:;
- (void).cxx_destruct;
- (id)button;
@end
