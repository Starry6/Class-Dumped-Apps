@interface AWEIMNewAwemeContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString displayTitle;
@property (nonatomic) NSString displayDetail;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) AWEURLModel originCoverURL;
@property (nonatomic) BOOL showLoadingView;
@property (nonatomic) BOOL showPlayButtonView;
@property (nonatomic) @? tapActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (id)originCoverURL;
- (void)setShowLoadingView:;
- (void)setDisplayDetail:;
- (void)setOriginCoverURL:;
- (void)setShowPlayButtonView:;
- (BOOL)showPlayButtonView;
- (void).cxx_destruct;
- (id)displayTitle;
- (void)setDisplayTitle:;
- (BOOL)showLoadingView;
- (id)displayDetail;
- (id)coverURL;
- (void)setCoverURL:;
@end
