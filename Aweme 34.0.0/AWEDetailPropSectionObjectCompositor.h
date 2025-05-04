@interface AWEDetailPropSectionObjectCompositor : NSObject
- (void)p_safeAddObject:toArray:;
- (void)p_addHeaderInfoToArray:viewModel:;
- (void)p_addWelfareToArray:viewModel:;
- (void)p_addCommerceDescriptionToArray:viewModel:;
- (void)p_addChallengeToArray:viewModel:;
- (void)p_addTaskLiteToArray:viewModel:;
- (void)p_addLinkToArray:viewModel:;
- (void)p_addAILoraDetailPageToArray:viewModel:;
- (void)p_addVerifiedUserToArray:viewModel:;
- (void)p_addAIWarningNoticeToArray:viewModel:;
- (void)p_addAwemeListToArray:viewModel:;
- (void)handleItemsInteractionWithArray:viewModel:;
- (BOOL)lastObjectIsVerifiedUserObject:;
- (BOOL)lastObjectIsLinkObject:;
- (id)compositeSectionObjectsWithViewModel:;
@end
