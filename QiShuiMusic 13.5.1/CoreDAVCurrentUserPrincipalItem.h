@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem
@property (nonatomic) CoreDAVHrefItem href;
@property (nonatomic) CoreDAVItemWithNoChildren unauthenticated;
- (void)setHref:;
- (void)setUnauthenticated:;
- (id)href;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)unauthenticated;
+ (id)copyParseRules;
@end
