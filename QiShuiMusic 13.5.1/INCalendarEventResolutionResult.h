@interface INCalendarEventResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedCalendarEvent:;
+ (id)disambiguationWithCalendarEventsToDisambiguate:;
+ (id)confirmationRequiredWithCalendarEventToConfirm:;
@end
