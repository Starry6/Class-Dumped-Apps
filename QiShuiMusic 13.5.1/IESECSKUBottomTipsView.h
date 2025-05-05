@interface IESECSKUBottomTipsView : UIView
@property (nonatomic) @? buttonClickCallback;
- (id)buttonClickCallback;
- (id)buttonTextAttrWith:;
- (id)initTipViewWith:;
- (void)setButtonClickCallback:;
- (void)setupWith:;
- (void).cxx_destruct;
- (void)tapAction:;
+ (double)tipsButtonWidthWith:;
+ (double)tipsViewHeightWith:;
@end
