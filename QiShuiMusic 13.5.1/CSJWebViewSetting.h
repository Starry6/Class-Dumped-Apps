@interface CSJWebViewSetting : NSObject
+ (id)_contentTypeOfExtension:;
+ (id)buildRequestHeadersWithUrl:;
+ (void)doInitialize;
+ (id)getRegisterPrefix:;
+ (id)getSettingHeaders;
+ (void)registerPrefix:prefixUrl:;
@end
