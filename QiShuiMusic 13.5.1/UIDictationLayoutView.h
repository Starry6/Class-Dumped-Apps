@interface UIDictationLayoutView : UIDictationView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isShowing;
- (id)darkGrayColor;
- (void)layoutSubviews;
- (void)setState:;
- (void)updateLanguageLabel;
- (void)globeButtonPressed:withEvent:location:;
- (void)setRenderConfig:;
- (id)initWithFrame:;
- (id)pointerInteraction:styleForRegion:;
- (void)returnToKeyboard;
- (void).cxx_destruct;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:withEvent:;
- (void)keyboardButtonPressed:;
@end
