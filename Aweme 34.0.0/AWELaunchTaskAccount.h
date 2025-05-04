@interface AWELaunchTaskAccount : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupConfig:;
- (id)appRequiredParams;
- (id)domainListToShareLoginToken;
- (BOOL)shouldAddXTokenToRequest:;
- (BOOL)checkIfLoginExpiredWithRequest:resposne:data:;
- (id)bussinessDomain;
- (id)aAWEZLinkSDKManagerCommonAdapter;
- (id)defaultLoginPaths;
+ (Class)aAWEZLinkSDKManagerCommonAdapterClass;
+ (id)sharedInstance;
+ (void)execute;
@end
