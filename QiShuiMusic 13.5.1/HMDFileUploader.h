@interface HMDFileUploader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)moduleNetworkProviderConfigHosts;
- (id)moduleNetworkProviderDefaultHosts;
- (id)moduleNetworkProviderInjectedHosts;
- (void)realUploadFileWithRequest:model:needResponse:;
- (void)uploadFileWithRequest:;
- (BOOL)shouldEncrypt;
+ (id)sharedInstance;
@end
