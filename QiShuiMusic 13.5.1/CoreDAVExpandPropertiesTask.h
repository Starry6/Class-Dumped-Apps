@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask
@property (nonatomic) NSMutableSet propertiesToExpand;
- (id)requestBody;
- (id)propertiesToExpand;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)initWithPropertiesToFind:atURL:expandedName:expandedNameSpace:;
- (void).cxx_destruct;
- (id)parseHints;
- (id)description;
- (void)addPropertyToExpandWithPropertiesToFind:expandedName:expandedNameSpace:;
- (void)setPropertiesToExpand:;
@end
