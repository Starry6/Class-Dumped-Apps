@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem
@property (nonatomic) CoreDAVHrefItem href;
@property (nonatomic) CoreDAVLeafItem commonName;
- (void)setHref:;
- (id)copyParseRules;
- (id)href;
- (id)init;
- (void).cxx_destruct;
- (id)commonName;
- (void)setCommonName:;
@end
