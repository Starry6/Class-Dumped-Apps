@interface ECPOPAccount : ECAccount
@property (nonatomic) q bigMessageWarningSize;
@property (nonatomic) q daysAfterDownloadToDeleteMessagesFromServer;
@property (nonatomic) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) q deletionPolicy;
@property (nonatomic) BOOL hasNotFinishedFirstTimeSync;
- (BOOL)hasNotFinishedFirstTimeSync;
- (long long)defaultPortNumber;
- (void)setBigMessageWarningSize:;
- (void)setHasNotFinishedFirstTimeSync:;
- (long long)deletionPolicy;
- (long long)defaultSecurePortNumber;
- (long long)bigMessageWarningSize;
- (BOOL)daysAfterDownloadToDeleteMessagesFromServerIsSet;
- (long long)daysAfterDownloadToDeleteMessagesFromServer;
- (void)setDeletionPolicy:;
- (void)setDaysAfterDownloadToDeleteMessagesFromServer:;
+ (id)standardPorts;
+ (id)standardSSLPorts;
@end
