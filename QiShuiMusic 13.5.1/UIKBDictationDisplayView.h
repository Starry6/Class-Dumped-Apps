@interface UIKBDictationDisplayView : UIKBKeyView
@property (nonatomic) UIDictationView dictationView;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setRenderConfig:;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)setDictationView:;
- (id)dictationView;
- (id)initWithFrame:keyplane:key:;
- (void)updateForKeyplane:key:;
- (void)updateDictationColor;
@end
