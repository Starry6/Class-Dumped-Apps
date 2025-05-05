@interface HTSLiveBadgeTextConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBadgeButtonText clickOthersWithoutAuth;
@property (nonatomic) BOOL hasClickOthersWithoutAuth;
@property (nonatomic) HTSLiveBadgeButtonText clickOthersWithAuth;
@property (nonatomic) BOOL hasClickOthersWithAuth;
@property (nonatomic) HTSLiveBadgeButtonText clickOthersFreeBadge;
@property (nonatomic) BOOL hasClickOthersFreeBadge;
@property (nonatomic) HTSLiveBadgeButtonText clickSelfBadge;
@property (nonatomic) BOOL hasClickSelfBadge;
+ (id)descriptor;
@end
