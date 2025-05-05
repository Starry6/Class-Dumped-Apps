@interface UIDocumentPasswordView : UIView
@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> passwordDelegate;
@property (nonatomic) UITextField passwordField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)drawRect:;
- (id)_labelFont;
- (void)dealloc;
- (void)textFieldDidEndEditing:;
- (void)layoutSubviews;
- (BOOL)_canDrawContent;
- (void)textFieldDidBeginEditing:;
- (void)_passwordEntered:;
- (id)initWithDocumentName:;
- (id)_labelTextColor;
- (double)_labelHorizontalOffset;
- (double)_textFieldWidth;
- (id)passwordDelegate;
- (void)setPasswordDelegate:;
- (id)passwordField;
@end
