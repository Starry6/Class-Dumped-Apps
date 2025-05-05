@interface INCallGroupConversationResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedCallGroupConversation:;
+ (id)disambiguationWithCallGroupConversationsToDisambiguate:;
+ (id)confirmationRequiredWithCallGroupConversationToConfirm:;
@end
