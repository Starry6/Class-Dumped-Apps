@interface IMTransferServicesCompressionController : NSObject
- (void)fileCopierDidStart:;
- (void)fileCopierDidFinish:;
- (void)_mapCopier:toBlock:;
- (void)_unmapCopier:;
- (id)_blockForCopier:;
- (void)compressFileTransfer:completionBlock:;
+ (id)sharedInstance;
@end
