@interface CalDAVCalendarServerChangesItem : CoreDAVItem
@property (nonatomic) NSMutableSet changedProperties;
- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (id)changedProperties;
- (void)setChangedProperties:;
- (id)initWithNameSpace:andName:;
- (void)addChangedProperty:;
@end
