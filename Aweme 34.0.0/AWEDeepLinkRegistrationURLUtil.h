@interface AWEDeepLinkRegistrationURLUtil : NSObject
- (id)aAWEDeepLinkRegistrationURLUtilCommonAdapter;
+ (id)getSecLinkQueryParamsForURL:referString:;
+ (id)getSafeWebUrlFrom:referString:;
+ (id)getSecLinkQueryParamsForLiveFromURL:referString:;
+ (id)localizeSchemeForURL:;
+ (BOOL)checkAppScheme:;
+ (BOOL)checkHTTP:;
+ (BOOL)checkWithSchemaConfig:sourceType:;
+ (Class)aAWEDeepLinkRegistrationURLUtilCommonAdapterClass;
+ (id)getSafeWebUrlFrom:sceneName:;
+ (BOOL)validateAppSchema:;
+ (BOOL)validateAppSchema:sourceType:;
@end
