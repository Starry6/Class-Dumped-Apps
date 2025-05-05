@interface HMDCloudCommandNetworkIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestWithUrl:method:params:requestHeaders:completion:;
- (void)uploadWithUrl:data:requestHeaders:completion:;
+ (id)sharedInstance;
@end
