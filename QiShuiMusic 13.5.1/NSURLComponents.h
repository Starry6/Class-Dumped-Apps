@interface NSURLComponents : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString string;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString user;
@property (nonatomic) NSString password;
@property (nonatomic) NSString host;
@property (nonatomic) NSNumber port;
@property (nonatomic) NSString path;
@property (nonatomic) NSString query;
@property (nonatomic) NSString fragment;
@property (nonatomic) NSString percentEncodedUser;
@property (nonatomic) NSString percentEncodedPassword;
@property (nonatomic) NSString percentEncodedHost;
@property (nonatomic) NSString percentEncodedPath;
@property (nonatomic) NSString percentEncodedQuery;
@property (nonatomic) NSString percentEncodedFragment;
@property (nonatomic) NSString encodedHost;
@property (nonatomic) {_NSRange=QQ} rangeOfScheme;
@property (nonatomic) {_NSRange=QQ} rangeOfUser;
@property (nonatomic) {_NSRange=QQ} rangeOfPassword;
@property (nonatomic) {_NSRange=QQ} rangeOfHost;
@property (nonatomic) {_NSRange=QQ} rangeOfPort;
@property (nonatomic) {_NSRange=QQ} rangeOfPath;
@property (nonatomic) {_NSRange=QQ} rangeOfQuery;
@property (nonatomic) {_NSRange=QQ} rangeOfFragment;
@property (nonatomic) NSArray queryItems;
@property (nonatomic) NSArray percentEncodedQueryItems;
- (id)modifyUrlWithProtocol:protocol:;
- (id)modifyLLashContent:content:;
- (id)modifyUrlWithHostIp:hostIp:;
- (id)modifyUrlWithPort:port:;
- (id)modifyUrlWithQueryItems:queryItems:;
- (id)tvl_URLWithQueryItems:;
- (id)tvl_replaceHostWithIp:;
- (id)tvl_replacePort:;
- (id)tvl_replaceProtocolWithTarget:;
- (id)BDUGQueryWithKey:;
- (BOOL)ieslivesaas_addItem:;
- (id)ieslivesaas_dictionaryFromQueryItems;
- (id)ieslivesaas_valueForQuery:;
- (BOOL)addItem:notCovered:;
- (id)dictionaryFromQueryItems;
- (id)valueForQuery:;
- (BOOL)addItem:;
- (id)awe_URLString;
- (void)cjpay_overrideQueryByDict:;
- (void)cjpay_setQueryValue:ifNotExistKey:;
- (void)geo_updateQueryItemsWithBlock:;
- (id)parsec_normalizedURLStringWithOptions:;
- (id)parsec_normalizedURLStringForTLDFeatures;
- (id)parsec_normalizedURLStringForLDAModel;
- (id)parsec_normalizedURLStringForDeepLinkIngest;
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;
- (id)embeddedAMPURLRange;
- (id)parsec_componentsForEmbeddedAMPURLFromRange:;
- (id)parsec_componentsAfterRemovingSubdomains;
- (id)fa_valueForQueryItem:;
- (id)fa_queryItemsDictionary;
- (id)firstQueryItemWithName:;
- (BOOL)containsQueryItemWithName:;
- (BOOL)containsPercentEncodedQueryItemWithName:;
- (id)ic_queryItemWithKey:;
- (id)ic_stringValueForQueryItemWithKey:;
- (BOOL)ic_boolValueForQueryItemWithKey:;
- (void)setUser:;
- (id)string;
- (id)path;
- (id)queryItems;
- (void)setPassword:;
- (id)init;
- (id)password;
- (void)setPercentEncodedHost:;
- (void)setScheme:;
- (void)setPercentEncodedFragment:;
- (id)scheme;
- (id)host;
- (void)setFragment:;
- (id)rangeOfPort;
- (id)initWithString:;
- (void)setPath:;
- (void)setQuery:;
- (void)setHost:;
- (id)percentEncodedQueryItems;
- (id)port;
- (id)query;
- (void)setPort:;
- (id)percentEncodedHost;
- (void)setQueryItems:;
- (id)initWithURL:resolvingAgainstBaseURL:;
- (void)setEncodedHost:;
- (id)percentEncodedPassword;
- (id)rangeOfFragment;
- (id)rangeOfScheme;
- (id)user;
- (id)percentEncodedUser;
- (void)setPercentEncodedQuery:;
- (id)rangeOfPath;
- (id)encodedHost;
- (void)setPercentEncodedPassword:;
- (id)rangeOfHost;
- (id)percentEncodedQuery;
- (void)setPercentEncodedQueryItems:;
- (void)setPercentEncodedPath:;
- (id)rangeOfPassword;
- (id)fragment;
- (id)URLRelativeToURL:;
- (void)setPercentEncodedUser:;
- (id)percentEncodedPath;
- (id)rangeOfQuery;
- (id)percentEncodedFragment;
- (id)URL;
- (id)rangeOfUser;
- (id)copyWithZone:;
+ (id)btd_componentsWithString:;
+ (id)btd_componentsWithURL:;
+ (id)parsec_componentsWithURL:resolvingAgainstBaseURL:;
+ (id)parsec_componentsWithString:;
+ (id)mt_queryParameterStringForDictionary:;
+ (id)allocWithZone:;
+ (id)componentsWithString:;
+ (id)componentsWithURL:resolvingAgainstBaseURL:;
@end
