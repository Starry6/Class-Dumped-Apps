@interface WBSReaderFontDownloadManager : NSObject
- (id)init;
- (double)downloadProgressForFont:;
- (BOOL)hasOngoingRequestForFont:;
- (void)downloadFont:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
