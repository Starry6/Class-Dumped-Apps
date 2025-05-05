@interface INNoteContentResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedNoteContent:;
+ (id)disambiguationWithNoteContentsToDisambiguate:;
+ (id)confirmationRequiredWithNoteContentToConfirm:;
@end
