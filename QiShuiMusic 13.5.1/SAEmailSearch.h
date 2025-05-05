@interface SAEmailSearch : SADomainCommand
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString fromEmail;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString timeZoneId;
@property (nonatomic) NSString toEmail;
- (void)setStatus:;
- (id)startDate;
- (id)subject;
- (id)groupIdentifier;
- (void)setSubject:;
- (void)setTimeZoneId:;
- (void)setStartDate:;
- (BOOL)requiresResponse;
- (id)timeZoneId;
- (void)setEndDate:;
- (id)endDate;
- (id)encodedClassName;
- (int)status;
- (id)fromEmail;
- (void)setFromEmail:;
- (id)toEmail;
- (void)setToEmail:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
