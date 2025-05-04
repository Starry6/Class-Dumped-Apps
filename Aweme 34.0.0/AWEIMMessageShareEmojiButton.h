@interface AWEIMMessageShareEmojiButton : UIButton
@property (nonatomic) BOOL animating;
@property (nonatomic) NSString source;
@property (nonatomic) Q shareState;
- (void)p_updateUI;
- (void)p_updateUIAnimated:;
- (id)p_backgroundColorForState:;
- (void)setShareState:animated:;
- (void)setAnimating:;
- (id)initWithSource:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (BOOL)animating;
- (unsigned long long)shareState;
- (void)setShareState:;
@end
