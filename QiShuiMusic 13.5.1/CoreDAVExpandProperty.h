@interface CoreDAVExpandProperty : NSObject
@property (nonatomic) NSSet propertiesToFind;
@property (nonatomic) NSString expandedName;
@property (nonatomic) NSString expandedNameSpace;
- (id)propertiesToFind;
- (void).cxx_destruct;
- (void)setPropertiesToFind:;
- (id)initWithPropertiesToFind:expandedName:expandedNameSpace:;
- (id)expandedName;
- (void)setExpandedName:;
- (id)expandedNameSpace;
- (void)setExpandedNameSpace:;
@end
