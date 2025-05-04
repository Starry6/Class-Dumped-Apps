@interface AWEIMNonUserOneCardMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) {CGSize=dd} oneCardViewSize;
@property (nonatomic) UIView oneCardView;
@property (nonatomic) UIImage coverImage;
- (void)setCoverImage:;
- (id)oneCardView;
- (void)setOneCardView:;
- (void)setOneCardViewSize:;
- (id)oneCardViewSize;
- (void).cxx_destruct;
- (id)coverImage;
- (id)tapAction;
- (void)setTapAction:;
@end
