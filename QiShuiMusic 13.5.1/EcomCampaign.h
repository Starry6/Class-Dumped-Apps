@interface EcomCampaign : IESLivePBBaseMessage
@property (nonatomic) q remainingSeconds;
@property (nonatomic) EcomAuction auction;
@property (nonatomic) BOOL hasAuction;
@property (nonatomic) q type;
+ (id)descriptor;
@end
