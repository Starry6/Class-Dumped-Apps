@interface WBUFormAutoFillPrompt : NSObject
- (void).cxx_destruct;
- (void)_alertTextFieldDidChange:;
- (void)showAutoFillPromptForUsernameInWebView:title:message:suggestedUsername:password:isGeneratedPassword:completionHandler:;
+ (void)showAutoFillPromptInWebView:title:message:cancelButtonTitle:otherButtonTitles:makeFirstButtonSuggestedAction:completionHandler:;
+ (void)showAutoFillPromptInWebView:title:message:cancelButtonTitle:otherButtonTitles:cancelWhenAppEntersBackground:makeFirstButtonSuggestedAction:completionHandler:;
@end
