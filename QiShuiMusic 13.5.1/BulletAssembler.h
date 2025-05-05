@interface BulletAssembler : NSObject
- (void)registerBridgeProvider:withBid:;
- (void)setup;
+ (void)bindUserInfo;
+ (void)bulletInitWithConfig:;
+ (void)setupGlobalContextWithConfig:;
+ (void)setupLocalStorage;
+ (void)setupResourceLoaderWithConfig:;
+ (void)setupXBridgeWithConfig:;
+ (id)shareInstance;
@end
