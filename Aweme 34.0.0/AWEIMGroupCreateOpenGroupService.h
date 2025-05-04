@interface AWEIMGroupCreateOpenGroupService : HTSService
- (void)DUXLoadingToastDidClosed:;
- (void)DUXLoadingToastDidStopAnimating:;
- (void)DUXToastWillRemoved:;
- (Class)createOpenGroupViewControllerClass;
- (id)makeCreateOpenGroupViewControllerWithContext:;
- (id)makeCreateOpenGroupViewControllerWithModel:ruleInfo:;
- (id)makeCreateOpenGroupPageContextWithEnterFrom:;
- (id)makeCreateOpenGroupPageContextWithBizLine:bizScene:invokeChannel:enterFrom:;
- (id)prefetchCreateOpenGroupPageDataWithGroupType:actionCheckSource:;
- (void)fetchCreateOpenGroupDataWithGroupType:actionCheckSource:completion:;
- (BOOL)showCreateOpenGroupRuleBlockDialogWithTitle:subtitle:ruleInfo:;
- (void)transferToCreateOpenGroupPageWithEnterFrom:checkSource:pageContextConfiguration:transferCompletion:;
- (void)showCreateOpenGroupRuleViewControllerWithRuleInfo:;
- (BOOL)createOpenGroupV2IfNeed;
- (id)init;
- (void).cxx_destruct;
@end
