@interface AWEUserModuleConfigCommon : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableMultiLogin;
+ (BOOL)enableWriteKeychain;
+ (BOOL)shouldStoreUserInfoForChainLogin;
+ (id)wechatUniversalLink;
@end
