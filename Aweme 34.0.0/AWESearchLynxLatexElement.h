@interface AWESearchLynxLatexElement : LynxUI
@property (nonatomic) NSString content;
@property (nonatomic) LatexView latexView;
- (void)onReceiveUIOperation:;
- (void)content:requestReset:;
- (void)setLatexView:;
- (id)latexView;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)createView;
+ (id)__lynx_prop_config__310;
@end
