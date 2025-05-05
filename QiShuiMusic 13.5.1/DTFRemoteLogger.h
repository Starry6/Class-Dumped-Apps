@interface DTFRemoteLogger : NSObject
+ (void)setUploadBlock:;
+ (id)convertToStringFromArray:;
+ (id)convertToStringFromDictionary:kvSeparator:componentsSeparator:;
+ (id)convertToStringFromExtDictionary:;
+ (id)descriptionFromDictionary:;
+ (long long)levelNumberForString:;
+ (void)protectExtentionParams:;
+ (void)writeLogWithActionId:extParams:appId:seed:ucId:;
+ (void)writeLogWithActionId:extParams:appId:seed:ucId:bizType:;
+ (void)writeLogWithActionId:extParams:appId:seed:ucId:bizType:formatterDictionary:;
+ (void)writeLogWithLogDictionary:;
+ (void)setSDKVersion:;
+ (void)upload;
@end
