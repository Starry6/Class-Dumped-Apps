@interface PLAssetsdCrashRecoverySupport : NSObject
- (id)initWithPathManager:;
- (void)recoverFromCrashIfNeededWithImageWriter:;
- (void).cxx_destruct;
- (BOOL)isSafeToRecoverAfterCrash;
- (void)_enqeueRecoveryJob:date:toImageWriter:;
@end
