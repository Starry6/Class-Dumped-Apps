@interface AWEPOIAlbumMoreOptions : UIView
@property (nonatomic) AWEPOIDetailMoreOptionView moreOptionView;
@property (nonatomic) UIView tapToCloseView;
@property (nonatomic) NSArray moreOptionItems;
@property (nonatomic) <AWEPOIAlbumMoreOptionsViewDelegate> delegate;
- (void)p_setupViews;
- (void)setMoreOptionItems:;
- (id)moreOptionItems;
- (void)tapToClose;
- (id)tapToCloseView;
- (id)moreOptionView;
- (void)p_closePage;
- (void)setTapToCloseView:;
- (void)tapItem:;
- (id)initWithFrame:moreOptionItems:;
- (void)setMoreOptionView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupViews;
@end
