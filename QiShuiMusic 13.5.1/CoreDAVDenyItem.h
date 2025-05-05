@interface CoreDAVDenyItem : CoreDAVItem
@property (nonatomic) NSMutableSet privileges;
- (void)write:;
- (id)init;
- (void)setPrivileges:;
- (id)privileges;
- (void).cxx_destruct;
- (id)description;
- (void)addPrivilege:;
+ (id)copyParseRules;
@end
