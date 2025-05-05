@interface CKRequestInfo : NSObject
@property (nonatomic) NSArray requestOperations;
@property (nonatomic) NSString operationClassName;
@property (nonatomic) NSString requestUUID;
@property (nonatomic) NSDictionary responseHTTPHeaders;
@property (nonatomic) NSDictionary w3cNavigationTiming;
- (id)responseHTTPHeaders;
- (void)setRequestOperations:;
- (void)setOperationClassName:;
- (id)initWithCoder:;
- (id)initWithRequestUUID:responseHTTPHeaders:w3cTiming:;
- (id)w3cNavigationTiming;
- (void)encodeWithCoder:;
- (id)requestUUID;
- (id)requestOperations;
- (void).cxx_destruct;
- (id)operationClassName;
+ (BOOL)supportsSecureCoding;
@end
