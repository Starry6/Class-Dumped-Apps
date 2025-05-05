@interface IESLiveSaaSWalletAssistSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSCJPayService> cjpayService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cjpayService;
- (void)parseWithParams:fromInside:completion:;
- (void)setCjpayService:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
