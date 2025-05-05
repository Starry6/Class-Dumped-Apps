@interface INAnnouncementResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedAnnouncement:;
+ (id)disambiguationWithAnnouncementsToDisambiguate:;
+ (id)confirmationRequiredWithAnnouncementToConfirm:;
@end
