@interface SFSharedWebCredentialsDatabaseEntry : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString appID;
@property (nonatomic) q service;
@property (nonatomic) BOOL approved;
- (long long)service;
- (id)appID;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (BOOL)isApproved;
- (id)initWithServiceDetails:;
- (id)_initWithDomain:appID:service:isApproved:;
@end
