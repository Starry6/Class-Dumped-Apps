@interface UIKeyboardSuggestedInputMode : UIKeyboardInputMode
@property (nonatomic) BOOL enabled;
- (BOOL)enabled;
- (id)initWithIdentifier:enabled:;
- (void)setEnabled:;
- (id)description;
@end
