@interface SACalendarEventSnippet : SAUISnippet
@property (nonatomic) NSArray events;
@property (nonatomic) NSDate snippetEndDate;
@property (nonatomic) NSDate snippetStartDate;
@property (nonatomic) NSString timeZoneId;
- (id)groupIdentifier;
- (void)setTimeZoneId:;
- (id)timeZoneId;
- (void)setEvents:;
- (id)encodedClassName;
- (id)events;
- (id)snippetEndDate;
- (void)setSnippetEndDate:;
- (id)snippetStartDate;
- (void)setSnippetStartDate:;
+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:context:;
@end
