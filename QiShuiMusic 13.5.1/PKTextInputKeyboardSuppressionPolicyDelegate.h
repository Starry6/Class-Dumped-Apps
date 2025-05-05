@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject
@property (nonatomic) BOOL _suppressLocaleIdentifier;
@property (nonatomic) BOOL isFloatingKeyboardVisible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFloatingKeyboardVisible;
- (BOOL)_shouldSuppressForDelegate:;
- (BOOL)_shouldSuppressAssistantBarForDelegate:;
- (id)_recognitionLocaleIdentifier;
- (BOOL)_suppressLocaleIdentifier;
- (void)set_suppressLocaleIdentifier:;
- (BOOL)isSupportedForTextInputTraits:;
- (void)updateKeyboardSuppressionPolicy;
- (BOOL)_shouldSuppressKeyboardUIForDelegate:checkSource:;
- (void)setIsFloatingKeyboardVisible:;
@end
