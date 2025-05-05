@interface CoreDAVItemWithHrefChildren : CoreDAVItem
@property (nonatomic) NSMutableSet hrefs;
@property (nonatomic) CoreDAVItemWithNoChildren unauthenticated;
- (void)setUnauthenticated:;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsFullURLs;
- (void).cxx_destruct;
- (id)description;
- (void)addHref:;
- (id)unauthenticated;
- (void)setHrefs:;
- (id)hrefsAsStrings;
- (id)hrefs;
+ (id)copyParseRules;
@end
