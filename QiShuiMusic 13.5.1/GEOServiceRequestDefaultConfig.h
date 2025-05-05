@interface GEOServiceRequestDefaultConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)additionalHTTPHeaders;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;
- (id)dataRequestKindForRequest:traits:;
- (id)additionalURLQueryItems;
- (id)debugRequestName;
@end
