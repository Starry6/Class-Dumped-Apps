@interface HMDNetworkInjector : NSObject
@property (nonatomic) @? injectedEncryptBlock;
- (void)configEncryptBlock:;
- (id)encryptBlock;
- (id)injectedEncryptBlock;
- (void)setInjectedEncryptBlock:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
