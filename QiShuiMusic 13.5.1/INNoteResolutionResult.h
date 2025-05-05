@interface INNoteResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedNote:;
+ (id)disambiguationWithNotesToDisambiguate:;
+ (id)confirmationRequiredWithNoteToConfirm:;
@end
