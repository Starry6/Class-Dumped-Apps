@interface WBSPasswordManagerURL : NSObject
+ (id)passwordManagerURLWithDictionary:;
+ (id)valueForPasswordManagerResourceDictionary:key:;
+ (BOOL)isPasswordManagerSecurityRecommendationsResourceDictionary:;
+ (BOOL)isOtpauthResourceDictionary:;
+ (BOOL)boolForPasswordManagerResourceDictionary:key:defaultValue:;
+ (id)passwordManagerSecurityRecommendationsURL;
+ (id)_resourceSpecifierEncodedKey:value:;
+ (BOOL)_urlIsPasswordManagerURLWithScheme:resourceSpecifierDictionary:;
+ (BOOL)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:;
+ (BOOL)urlIsPasswordManagerURL:;
+ (id)_resourceSpecifierDictionaryForURL:;
+ (id)dictionaryWithPasswordManagerURL:;
+ (id)valueForPasswordManagerURL:key:;
@end
