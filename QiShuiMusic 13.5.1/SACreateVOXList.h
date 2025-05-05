@interface SACreateVOXList : SABaseCommand
@property (nonatomic) NSString domainName;
@property (nonatomic) NSArray introductions;
@property (nonatomic) NSArray items;
@property (nonatomic) q pageSize;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)domainName;
- (id)groupIdentifier;
- (id)items;
- (BOOL)requiresResponse;
- (void)setItems:;
- (id)encodedClassName;
- (void)setDomainName:;
- (long long)pageSize;
- (void)setPageSize:;
- (id)introductions;
- (void)setIntroductions:;
+ (id)createVOXList;
+ (id)createVOXListWithDictionary:context:;
@end
