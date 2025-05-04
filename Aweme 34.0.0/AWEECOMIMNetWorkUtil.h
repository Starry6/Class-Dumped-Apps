@interface AWEECOMIMNetWorkUtil : NSObject
+ (id)postURL:appendQuery:;
+ (id)messageFromResponse:;
+ (id)realEccsSchemeInfoWithEccsSchemeInfoApiString:;
+ (void)monitorServiceWithURLPath:jsonObj:;
+ (BOOL)validateResponse:;
@end
