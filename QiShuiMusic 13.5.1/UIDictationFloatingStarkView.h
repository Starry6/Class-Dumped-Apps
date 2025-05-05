@interface UIDictationFloatingStarkView : UIDictationView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)setState:;
- (void)dimmingViewWasTapped:;
- (void)show;
- (id)initWithFrame:;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (id)positionForShow;
- (void)prepareForReturnToKeyboard;
- (void)endpointButtonPressed;
- (void)setInputViewsHiddenForDictation:;
@end
