@interface SFFormAutoFillNode : NSObject
@property (nonatomic) WKWebProcessPlugInNodeHandle nodeHandle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)nodeHandle;
- (id)elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (id)initWithJSWrapper:inContext:;
- (void)setHTMLInputElementAutofilled:;
- (void)setHTMLInputElementAutoFilledAndViewable:;
- (void)setHTMLInputElementAutoFilledAndObscured:;
- (BOOL)isHTMLInputElementUserEdited;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:;
- (void)setSpinnerVisibilityOnHTMLInputElement:;
- (id)initWithNodeHandle:;
+ (id)autoFillNodeWithNodeHandle:;
@end
