@interface AWENetworkDownloadService : NSObject
- (void)startDownloadRequst:;
- (void)cancelDownloadRequst:actionCallback:;
- (void)deleteDownloadRequst:actionCallback:;
- (void)queryDownloadInfoWithTaskID:downloadInfoBlock:;
- (void)queryDownloadInfoWithTask:downloadInfoBlock:;
- (void)moveFileFrom:destination:fixConflict:outputError:;
+ (id)dictFromProcessInfo:request:;
+ (id)extraInfoFromDownloadResult:outputError:;
+ (id)sharedInstance;
@end
