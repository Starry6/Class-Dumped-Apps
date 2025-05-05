@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement
@property (nonatomic) NSString componentType;
@property (nonatomic) NSString summary;
@property (nonatomic) NSString displayName;
@property (nonatomic) ICSDateValue nextInstance;
@property (nonatomic) BOOL hadMoreInstances;
- (id)copyParseRules;
- (id)componentType;
- (id)init;
- (void)setHadMoreInstances:;
- (void)setComponentType:;
- (void)setNextInstance:;
- (id)nextInstance;
- (void)setSummary:;
- (void)setDeletedDetails:;
- (void)setDisplayName:;
- (id)displayName;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)hadMoreInstances;
@end
