@interface WKFormInputSession : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) NSObject<NSSecureCoding> userObject;
@property (nonatomic) <_WKFocusedElementInfo> focusedElementInfo;
@property (nonatomic) NSString accessoryViewCustomButtonTitle;
@property (nonatomic) UIView customInputView;
@property (nonatomic) UIView customInputAccessoryView;
@property (nonatomic) NSArray suggestions;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (nonatomic) BOOL requiresStrongPasswordAssistance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSuggestions:;
- (id)suggestions;
- (id)userObject;
- (void)endEditing;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)reloadFocusedElementContextView;
- (id)focusedElementInfo;
- (id)accessoryViewCustomButtonTitle;
- (void)setAccessoryViewCustomButtonTitle:;
- (id)customInputView;
- (void)setCustomInputView:;
- (id)customInputAccessoryView;
- (void)setCustomInputAccessoryView:;
- (BOOL)accessoryViewShouldNotShow;
- (void)setAccessoryViewShouldNotShow:;
- (BOOL)forceSecureTextEntry;
- (void)setForceSecureTextEntry:;
- (BOOL)requiresStrongPasswordAssistance;
- (id)initWithContentView:focusedElementInfo:requiresStrongPasswordAssistance:;
@end
