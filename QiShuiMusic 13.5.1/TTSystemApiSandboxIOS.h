@interface TTSystemApiSandboxIOS : NSObject
@property (nonatomic) @? mobileCountryCodeForDataServiceBlock;
@property (nonatomic) @? mobileNetworkCodeForDataServiceBlock;
- (id)mobileCountryCodeForDataServiceBlock;
- (id)mobileNetworkCodeForDataServiceBlock;
- (void)setMobileCountryCodeForDataServiceBlock:;
- (void)setMobileNetworkCodeForDataServiceBlock:;
- (id)init;
+ (id)shareInstance;
@end
