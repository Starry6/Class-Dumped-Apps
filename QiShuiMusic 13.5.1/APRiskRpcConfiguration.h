@interface APRiskRpcConfiguration : NSObject
@property (nonatomic) NSInteger timeout;
@property (nonatomic) NSString gatewayURL;
@property (nonatomic) NSDictionary headers;
- (id)gatewayURL;
- (void)setGatewayURL:;
- (void)setTimeout:;
- (void)setHeaders:;
- (void).cxx_destruct;
- (int)timeout;
- (id)headers;
@end
