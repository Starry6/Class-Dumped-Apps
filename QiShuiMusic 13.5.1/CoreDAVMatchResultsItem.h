@interface CoreDAVMatchResultsItem : CoreDAVItem
@property (nonatomic) CoreDAVLeafItem rank;
@property (nonatomic) CoreDAVLeafItem language;
@property (nonatomic) CoreDAVLeafItem region;
@property (nonatomic) CoreDAVLeafItem calendarDescription;
- (void)setRegion:;
- (void)setLanguage:;
- (id)language;
- (id)region;
- (id)rank;
- (void).cxx_destruct;
- (void)setCalendarDescription:;
- (id)description;
- (id)calendarDescription;
- (void)setRank:;
+ (id)copyParseRules;
@end
