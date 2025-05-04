@interface AWEIMSubscribeSectionViewModel : AWEBaseListSectionViewModel
- (long long)modelsDiffType;
- (void)removeCellModel:;
- (void)unFollowUserForModel:;
- (void)followUserForModel:;
- (void)removeCellModelsForSecUid:;
@end
