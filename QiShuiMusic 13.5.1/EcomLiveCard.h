@interface EcomLiveCard : IESLivePBBaseMessage
@property (nonatomic) EcomProduct product;
@property (nonatomic) BOOL hasProduct;
@property (nonatomic) EcomIcon icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) EcomCampaign campaign;
@property (nonatomic) BOOL hasCampaign;
+ (id)descriptor;
@end
