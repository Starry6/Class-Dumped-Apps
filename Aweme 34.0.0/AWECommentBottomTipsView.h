@interface AWECommentBottomTipsView : UIView
@property (nonatomic) UIView baseView;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (id)initWithFrame:isBGWhiteColor:;
- (void)onUIThemeUpdateWith:;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)__setupUI;
- (void)setBaseView:;
- (void)refreshUI;
- (void).cxx_destruct;
- (id)baseView;
- (void)setCloseButton:;
- (id)closeButton;
@end
