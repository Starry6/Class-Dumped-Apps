@interface AWETeenExternalAlbumBottomBarView : UIView
@property (nonatomic) <AWETeenExternalAlbumBottomBarViewDelegate> delegate;
@property (nonatomic) UIView moreView;
@property (nonatomic) AWETeenExternalAlbumTitleView titleView;
- (void)updateWithAwemeModel:;
- (id)moreView;
- (void)setMoreView:;
- (void)bottomBarDidClick:;
- (id)titleView;
- (void)setTitleView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithFrame:delegate:;
- (void)setupUI;
@end
