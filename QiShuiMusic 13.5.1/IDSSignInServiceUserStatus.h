@interface IDSSignInServiceUserStatus : NSObject
@property (nonatomic) Q serviceType;
@property (nonatomic) NSArray serviceUserInfos;
@property (nonatomic) Q phoneUserStatus;
@property (nonatomic) Q appleIDUserStatus;
- (unsigned long long)serviceType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceType:userInfos:;
- (unsigned long long)phoneUserStatus;
- (unsigned long long)appleIDUserStatus;
- (id)serviceUserInfos;
@end
