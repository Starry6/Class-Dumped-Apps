@interface IESLiveSaaSWalletChangeSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSWalletService> walletService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseWithParams:fromInside:completion:;
- (void)setWalletService:;
- (id)walletService;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
