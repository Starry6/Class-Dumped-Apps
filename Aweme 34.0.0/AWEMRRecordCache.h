@interface AWEMRRecordCache : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) BDXThreadSafeArray componentRecordList;
@property (nonatomic) BDXThreadSafeArray journalRecordList;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)recordConsumeWithToken:;
- (void)setComponentRecordList:;
- (void)setJournalRecordList:;
- (void)asyncPurgeJournalIfNeeded;
- (id)componentRecordList;
- (id)journalRecordList;
- (void)storeAllRecordList;
- (void)storeJournalRecordList;
- (void)storeComponentRecordList;
- (id)recordShowWithComponentConfig:;
- (BOOL)recordHideWithToken:;
- (id)descriptionOfComponentRecordList;
- (id)descriptionOfJournalRecordList;
- (void)clearAllRecord;
- (id)queryJournalWithConfig:;
- (void)setDomain:;
- (void)setup;
- (id)domain;
- (void).cxx_destruct;
- (id)initWithDomain:;
@end
