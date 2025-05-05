@interface HTSLiveBattleSeasonPKResultMessage_UpgradeResult : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage gradeImg;
@property (nonatomic) BOOL hasGradeImg;
@property (nonatomic) HTSLiveImage upgradeImg;
@property (nonatomic) BOOL hasUpgradeImg;
@property (nonatomic) NSString upgradeDesc;
@property (nonatomic) HTSLiveImage descBgImg;
@property (nonatomic) BOOL hasDescBgImg;
@property (nonatomic) NSString preGradeDesc;
@property (nonatomic) NSString afterGradeDesc;
@property (nonatomic) HTSLiveImage beforeUpgradeImg;
@property (nonatomic) BOOL hasBeforeUpgradeImg;
+ (id)descriptor;
@end
