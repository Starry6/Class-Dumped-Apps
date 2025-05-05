@interface AWEIMEmoticonEmptyThemeView : UIView
@property (nonatomic) UIView addView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) AWEIMAddView plusIconView;
- (id)addView;
- (void)addCuntomGiphy;
- (id)initWithFrame:containerViewType:themeStyle:;
- (id)plusIconView;
- (void)setAddView:;
- (void)setPlusIconView:;
- (void)setTipsLabel:;
- (id)tipsLabel;
- (void)updateWithKeyboardHeight:;
- (void).cxx_destruct;
@end
