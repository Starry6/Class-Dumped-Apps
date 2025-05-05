@interface INNoteContentTypeResolutionResult : INIntentResolutionResult
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedNoteContentType:;
+ (id)confirmationRequiredWithNoteContentTypeToConfirm:;
@end
