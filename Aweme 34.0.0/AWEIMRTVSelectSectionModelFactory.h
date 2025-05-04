@interface AWEIMRTVSelectSectionModelFactory : NSObject
- (id)onlineSelectSectionModelWithUserIDs:activeUserMapper:needSort:;
- (id)indexIndicatorSelectSectionModelsWithUserSecIDs:activeUserMapper:;
- (id)selectedSectionModelWithSecUserIDs:sectionTitle:activeUserMapper:;
- (id)onlineSelectSectionModelWithUserIDs:activeUserMapper:preferSelectedSecUIDs:needSort:;
- (id)indexIndicatorSelectSectionModelsWithUserSecIDs:activeUserMapper:preferSelectedSecUIDs:;
- (id)__getUserWithSecUID:;
- (id)__sortedDataWithTitlesFromSecUserIDs:;
- (id)__aweIMUsersFromSecUserIDs:;
@end
