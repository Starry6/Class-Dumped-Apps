@interface UIDictationPopoverView : UIDictationView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setState:;
- (id)initWithFrame:;
- (id)pointerInteraction:styleForRegion:;
- (void)returnToKeyboard;
- (void).cxx_destruct;
- (void)willMoveToWindow:;
- (void)keyboardButtonPressed:;
- (void)cancelButtonPressed:;
- (void)centerButtonPressed:;
- (void)languageButtonPressed:withEvent:;
- (void)startButtonPressed:;
- (void)stopButtonPressed:;
- (id)buttonImageNamed:;
- (void)clearLanguageButtons;
- (id)languageButtons:;
+ (id)viewSize;
@end
