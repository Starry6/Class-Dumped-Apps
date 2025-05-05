@interface MSIntentMailResolutionResult : INObjectResolutionResult
+ (id)successWithResolvedMail:;
+ (id)disambiguationWithMailsToDisambiguate:;
+ (id)confirmationRequiredWithMailToConfirm:;
@end
