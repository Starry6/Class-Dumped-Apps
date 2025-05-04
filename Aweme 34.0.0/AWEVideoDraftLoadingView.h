@interface AWEVideoDraftLoadingView : UIView
@property (nonatomic) UIView<ACCTextLoadingViewProtcol> impl;
- (void)panAction:;
- (void)p_showTitle:delay:;
- (id)impl;
- (id)initWithFrame:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setImpl:;
- (void)tapAction:;
+ (id)showOnView:title:delay:;
@end
