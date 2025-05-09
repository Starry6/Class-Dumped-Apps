@interface CoreDAVPrincipalItem : CoreDAVItem
@property (nonatomic) CoreDAVHrefItem href;
@property (nonatomic) CoreDAVItemWithNoChildren all;
@property (nonatomic) CoreDAVItemWithNoChildren authenticated;
@property (nonatomic) CoreDAVItemWithNoChildren unauthenticated;
@property (nonatomic) CoreDAVItem property;
@property (nonatomic) CoreDAVItemWithNoChildren selfItem;
- (void)setHref:;
- (void)setProperty:;
- (void)setUnauthenticated:;
- (id)href;
- (void)write:;
- (id)init;
- (id)property;
- (id)authenticated;
- (void)setAuthenticated:;
- (id)all;
- (void).cxx_destruct;
- (id)description;
- (id)hashString;
- (id)unauthenticated;
- (void)setAll:;
- (void)setSelfItem:;
- (id)initTypeIsAll;
- (id)initTypeIsHREFWithURL:;
- (id)initTypeIsProperty:;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsSelf;
- (id)selfItem;
+ (id)copyParseRules;
@end
