@interface IESLiveSaaSECommerceBeforeLiveCheckModel : IESLiveSaaSECommerceBaseApiModel
@property (nonatomic) NSString alertContent;
@property (nonatomic) NSString noConnectedTargetURL;
@property (nonatomic) BOOL isConnected;
- (id)alertContent;
- (id)noConnectedTargetURL;
- (void)setAlertContent:;
- (void)setNoConnectedTargetURL:;
- (void)setIsConnected:;
- (void).cxx_destruct;
- (BOOL)isConnected;
+ (id)JSONKeyPathsByPropertyKey;
@end
