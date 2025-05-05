@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem
@property (nonatomic) NSMutableSet comps;
@property (nonatomic) NSSet compNames;
- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)componentsAsString;
- (id)childrenToWrite;
- (void)addComp:;
- (id)compNames;
- (id)comps;
- (void)setComps:;
@end
