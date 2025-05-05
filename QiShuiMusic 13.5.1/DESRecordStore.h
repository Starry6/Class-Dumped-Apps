@interface DESRecordStore : NSObject
@property (nonatomic) BOOL permitted;
@property (nonatomic) BOOL shouldMakeRecord;
- (BOOL)shouldMakeRecordWithFrequency:;
- (void)deleteSavedRecordWithIdentfier:completion:;
- (id)initWithBundleIdentifier:;
- (void)fetchSavedRecordInfoWithCompletion:;
- (void)deleteAllSavedRecordsWithCompletion:;
- (void)saveCoreDuetEvent:completion:;
- (void)saveRecordWithData:recordInfo:completion:;
- (void).cxx_destruct;
- (void)fetchNativeRecordDataForRecordUUID:completion:;
- (BOOL)isPermitted;
- (BOOL)shouldMakeRecord;
+ (void)_getServiceProxyWithErrorHandler:block:;
@end
