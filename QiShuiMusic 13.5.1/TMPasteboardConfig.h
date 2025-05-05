@interface TMPasteboardConfig : NSObject
+ (BOOL)checkSystemCall;
+ (id)certConfig:;
+ (unsigned long long)checkSystemCallSkipCount;
+ (double)expireTimeWithCert:;
+ (id)pasteboardCertConfig;
+ (id)patternsWithCert:;
+ (unsigned long long)unitDisableWithCert:;
@end
