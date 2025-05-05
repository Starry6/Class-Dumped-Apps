@interface BMRemoteSQLStoreManager : BMSQLStoreManager
@property (nonatomic) BOOL remoteOnly;
- (id)initWithURL:;
- (id)deleteRowsDerivedFromStream:eventIdentifier:;
- (BOOL)hasReadWriteAccessToURL:;
- (BOOL)remoteOnly;
- (void)setRemoteOnly:;
@end
