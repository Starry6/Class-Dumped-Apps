@interface HTSLiveLifeGrouponInfo : IESLivePBBaseMessage
@property (nonatomic) q permissionStatus;
@property (nonatomic) q aggCardId;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSString dynamicURL;
+ (id)descriptor;
@end
