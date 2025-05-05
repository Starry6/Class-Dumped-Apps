@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem
@property (nonatomic) NSMutableSet privileges;
- (id)init;
- (BOOL)hasPrivilegeWithNameSpace:andName:;
- (void)setPrivileges:;
- (id)privileges;
- (void).cxx_destruct;
- (id)description;
- (void)addPrivilege:;
+ (id)copyParseRules;
@end
