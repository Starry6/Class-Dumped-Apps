@interface IDSRegistrationRenewCredentialsCompletedMetric : NSObject
@property (nonatomic) q renewResult;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) q errorCode;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorDomain;
- (long long)errorCode;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithRenewResult:errorDomain:errorCode:;
- (long long)renewResult;
@end
