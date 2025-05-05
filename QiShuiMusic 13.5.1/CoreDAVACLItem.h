@interface CoreDAVACLItem : CoreDAVItem
@property (nonatomic) NSMutableSet accessControlEntities;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addACE:;
- (id)notGrantedSubsetOfACEs:;
- (id)liveACEs;
- (id)accessControlEntities;
- (void)setAccessControlEntities:;
+ (id)copyParseRules;
@end
