@interface AWEIMOneCardMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) UIView oneCardView;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) BOOL hiddenCover;
@property (nonatomic) BOOL hiddenCoverWithAnimation;
- (void)setCoverImage:;
- (id)oneCardView;
- (void)setOneCardView:;
- (BOOL)hiddenCover;
- (void)setHiddenCover:;
- (void)setHiddenCoverWithAnimation:;
- (BOOL)hiddenCoverWithAnimation;
- (void).cxx_destruct;
- (id)coverImage;
@end
