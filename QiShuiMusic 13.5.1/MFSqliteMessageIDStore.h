@interface MFSqliteMessageIDStore : NSObject
- (void).cxx_destruct;
- (id)initWithLibrary:URLString:;
- (void)_loadMailboxRowidIfNecessary:;
- (id)knownMessageIDsFromSet:;
- (id)messageIDsAddedBeforeDate:;
- (void)deleteUIDsNotInArray:;
- (unsigned int)numberOfMessageIDs;
- (void)deleteAllUIDs;
- (unsigned long long)flagsForUID:;
@end
