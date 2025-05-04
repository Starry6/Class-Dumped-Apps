@interface AWEVCDLiveAuthorizeServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)authorizeAccountAlert:text:didShowBlock:enterFrom:complete:;
+ (void)relationAccountAlert:text:didShowBlock:enterFrom:complete:;
@end
