@interface AWEIMShareBasicImpl.ShareContactListServiceImpl : HTSService
- (void)registerIMShareContactListExternalDataSource:;
- (void)fetchIMShareContactListWithContext:completion:;
- (void)additionallyRequestRemoteData;
- (BOOL)enableNewIMShareContactListDataRefactorWithBusinessScene:;
- (void)updateShareContactListWithShareModels:uniqueSourceKey:updateSource:;
- (void)appendShareContactListWithShareModels:uniqueSourceKey:updateSource:;
- (void)frontInsertShareContactListWithShareModels:uniqueSourceKey:updateSource:;
- (void)clearShareContactListWithUniqueSourceKey:updateSource:;
- (id)getRecentSharedModelsWithIMShareModel:;
- (id)init;
- (void)setup;
@end
