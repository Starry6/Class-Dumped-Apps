@interface CJPayPrivacyMethodUtil : NSObject
+ (void)applicationOpenUrl:withPolicy:bridgeCommand:options:completionHandler:;
+ (void)applicationOpenUrl:withPolicy:completionBlock:;
+ (void)applicationOpenUrl:withPolicy:options:completionHandler:;
+ (void)clearCert;
+ (void)injectCert:;
+ (void)pasteboardSetString:withPolicy:bridgeCommand:completionBlock:;
+ (void)requestAccessForMediaType:withPolicy:bridgeCommand:completionHandler:;
+ (void)requestAlbumAuthorizationWithPolicy:bridgeCommand:completionHandler:;
+ (void)startRunningWithCaptureSession:withPolicy:bridgeCommand:completionBlock:;
+ (void)stopRunningWithCaptureSession:withPolicy:bridgeCommand:completionBlock:;
@end
