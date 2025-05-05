@interface CoreDAVInvertItem : CoreDAVItem
@property (nonatomic) CoreDAVPrincipalItem principal;
- (void)write:;
- (id)init;
- (void)setPrincipal:;
- (id)principal;
- (void).cxx_destruct;
- (id)description;
+ (id)copyParseRules;
@end
