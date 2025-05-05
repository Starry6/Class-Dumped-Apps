@interface ICUserCredentialResponse : NSObject
@property (nonatomic) ICUserIdentityProperties identityProperties;
@property (nonatomic) ICUserIdentityProperties iCloudIdentityProperties;
- (id)identityProperties;
- (void)setICloudIdentityProperties:;
- (void)setIdentityProperties:;
- (id)iCloudIdentityProperties;
- (void).cxx_destruct;
@end
