@interface AMapADIUManager : NSObject
@property (nonatomic) AMapFoundationKeychainManager keyChainManager;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSString gA_DIU;
- (id)keyChainManager;
- (id)ADIU;
- (id)gA_DIU;
- (BOOL)isRequesting;
- (void)processWithResponseData:;
- (void)requestADIU;
- (void)saveWithADIU:;
- (void)setGA_DIU:;
- (void)setIsRequesting:;
- (void)setKeyChainManager:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
