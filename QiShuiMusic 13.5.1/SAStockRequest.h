@interface SAStockRequest : SADomainObject
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString requestType;
@property (nonatomic) NSDate startDate;
- (id)requestType;
- (void)setRequestType:;
- (id)startDate;
- (id)groupIdentifier;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (id)encodedClassName;
+ (id)request;
+ (id)requestWithDictionary:context:;
@end
