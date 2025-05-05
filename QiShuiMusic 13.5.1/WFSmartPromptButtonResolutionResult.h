@interface WFSmartPromptButtonResolutionResult : INObjectResolutionResult
+ (id)successWithResolvedSmartPromptButton:;
+ (id)disambiguationWithSmartPromptButtonsToDisambiguate:;
+ (id)confirmationRequiredWithSmartPromptButtonToConfirm:;
@end
