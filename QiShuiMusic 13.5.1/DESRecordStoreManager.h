@interface DESRecordStoreManager : NSObject
- (id)init;
- (void)fetchNativeRecordDataForRecordUUID:bundleId:completion:;
- (void)fetchRecordSetForBundleId:completion:;
- (void)deleteAllSavedRecordsForBundleId:completion:;
- (id)recordDirURLsForBundleId:;
- (void)saveCoreDuetEvent:completion:;
- (void)fetchSavedRecordInfoForRecordType:completion:;
- (void).cxx_destruct;
- (void)fetchSavedRecordInfoForBundleId:completion:;
- (void)fetchCoreDuetEventsForBundleId:completion:;
- (void)saveRecordForBundleId:data:recordInfo:completion:;
- (void)deleteSavedRecordForBundleId:identfier:completion:;
- (id)saveRecordToDirPath:data:recordInfo:error:;
@end
