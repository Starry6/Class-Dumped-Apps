@interface IESECStoreScrollToTopView : UIView
@property (nonatomic) UIImageView scrollToTopView;
@property (nonatomic) BOOL scrollToTopShown;
@property (nonatomic) BOOL scrollToTopAnimating;
@property (nonatomic) <IESECStoreScrollToTopViewDelegate> delegate;
- (void)didTapScrollToTopView;
- (void)hideScrollToTopAnimated;
- (BOOL)scrollToTopAnimating;
- (BOOL)scrollToTopShown;
- (void)setScrollToTopAnimating:;
- (void)setScrollToTopShown:;
- (void)setScrollToTopView:;
- (void)showScrollToTopAnimated;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (id)scrollToTopView;
@end
