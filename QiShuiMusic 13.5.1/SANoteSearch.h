@interface SANoteSearch : SADomainCommand
@property (nonatomic) NSString contentQuery;
@property (nonatomic) NSDate fromDate;
@property (nonatomic) NSDate toDate;
- (void)setFromDate:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setToDate:;
- (id)fromDate;
- (id)toDate;
- (id)contentQuery;
- (void)setContentQuery:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
