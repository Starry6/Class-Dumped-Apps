@interface INModifyNicknameResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedModifyNickname:;
+ (id)disambiguationWithModifyNicknamesToDisambiguate:;
+ (id)confirmationRequiredWithModifyNicknameToConfirm:;
@end
