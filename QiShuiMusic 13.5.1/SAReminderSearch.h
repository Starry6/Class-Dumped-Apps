@interface SAReminderSearch : SADomainCommand
@property (nonatomic) NSNumber completionStatus;
@property (nonatomic) NSDate dueAfter;
@property (nonatomic) NSDate dueBefore;
@property (nonatomic) NSString listName;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString timeZoneId;
- (id)subject;
- (id)groupIdentifier;
- (void)setSubject:;
- (void)setTimeZoneId:;
- (BOOL)requiresResponse;
- (id)timeZoneId;
- (id)encodedClassName;
- (id)completionStatus;
- (void)setCompletionStatus:;
- (id)listName;
- (id)dueAfter;
- (void)setDueAfter:;
- (id)dueBefore;
- (void)setDueBefore:;
- (void)setListName:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
