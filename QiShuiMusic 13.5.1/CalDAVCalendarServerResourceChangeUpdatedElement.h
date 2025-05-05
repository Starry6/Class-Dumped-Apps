@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement
@property (nonatomic) BOOL content;
@property (nonatomic) CoreDAVItem prop;
@property (nonatomic) NSMutableSet calendarChanges;
- (id)copyParseRules;
- (BOOL)content;
- (void)addContentItem:;
- (void)setContent:;
- (id)prop;
- (id)init;
- (void)addCalendarChange:;
- (void)setProp:;
- (id)calendarChanges;
- (void).cxx_destruct;
- (void)setCalendarChanges:;
@end
