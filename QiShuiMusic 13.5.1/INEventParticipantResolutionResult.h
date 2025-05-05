@interface INEventParticipantResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedEventParticipant:;
+ (id)disambiguationWithEventParticipantsToDisambiguate:;
+ (id)confirmationRequiredWithEventParticipantToConfirm:;
@end
