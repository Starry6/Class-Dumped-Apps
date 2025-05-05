@interface BU_IESGurdDownloadPatchPackageOperation : BU_IESGurdBaseDownloadOperation
- (BOOL)BSPatchWithPatchPackagePath:targetPackagePath:downloadURLString:error:;
- (id)createPatchedPackagePathWithError:;
- (void)handleDownloadResultWithPathURL:downloadInfo:networkError:;
- (BOOL)innerBSPatchWithPatchPackagePath:targetPackagePath:error:;
- (BOOL)updateBackupPackageWithPatchedPackagePath:error:;
- (void)cancel;
- (BOOL)isPatch;
- (void)operationDidStart;
@end
