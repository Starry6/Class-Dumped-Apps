@interface BDInstallFingerprint : NSObject
+ (id)base64StringWithArray:;
+ (BOOL)isiCloudAvailable;
+ (void)updateFingerprint:;
+ (id)fingerprint;
@end
