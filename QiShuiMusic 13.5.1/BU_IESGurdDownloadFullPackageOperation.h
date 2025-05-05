@interface BU_IESGurdDownloadFullPackageOperation : BU_IESGurdBaseDownloadOperation
- (BOOL)checkFileMd5WithPackagePath:md5:downloadURLString:error:;
- (id)createPackagePathWithError:;
- (void)handleDownloadResultWithPathURL:downloadInfo:networkError:;
- (BOOL)moveFileWithTempPackagePath:targetPath:error:;
- (void)cancel;
- (BOOL)isPatch;
- (void)operationDidStart;
@end
