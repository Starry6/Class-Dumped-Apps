@interface EMMailDropParser : NSObject
+ (id)parseExpiration:;
+ (id)parseHeaderValue:forField:;
+ (void)parseURL:intoMetadata:;
+ (id)allowedMailDropDownloadDomains;
+ (BOOL)urlIsValid:;
+ (id)_parseURLQuery:;
+ (BOOL)_domainIsAllowed:;
+ (void)_parseWrappedURL:intoMetadata:;
+ (void)_parseDirectURL:intoMetadata:;
@end
