@interface DouyinOpenSDKUtils : NSObject
+ (id)appendCommonParamsDictFor:;
+ (id)appendCommonParamsStringFor:;
+ (id)commonParams;
+ (id)dyopen_queryDictionaryFromURLString:;
+ (id)dyopen_urlWithBaseURLString:byAppendQueryItems:;
+ (id)dyopen_urlWithBaseURLString:byAppendQueryItems:fragment:;
+ (BOOL)hasInstallDouyin;
+ (BOOL)isInternal;
@end
