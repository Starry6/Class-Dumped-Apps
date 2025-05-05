@interface CoreDAVACEItem : CoreDAVItem
@property (nonatomic) CoreDAVPrincipalItem principal;
@property (nonatomic) CoreDAVInvertItem invert;
@property (nonatomic) CoreDAVGrantItem grant;
@property (nonatomic) CoreDAVDenyItem deny;
@property (nonatomic) CoreDAVItemWithNoChildren protectedItem;
@property (nonatomic) CoreDAVItemWithHrefChildItem inherited;
- (void)write:;
- (id)init;
- (void)setPrincipal:;
- (id)grant;
- (id)principal;
- (void).cxx_destruct;
- (id)invert;
- (id)description;
- (id)deny;
- (void)setInvert:;
- (void)setInherited:;
- (void)setGrant:;
- (void)setDeny:;
- (void)setProtectedItem:;
- (id)initWithPrincipal:shouldInvert:action:withPrivileges:;
- (id)protectedItem;
- (id)inherited;
+ (id)copyParseRules;
+ (id)privilegeItemWithNameSpace:andName:;
@end
