@interface HTSLiveRankListAwardMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q assetId;
@property (nonatomic) BOOL effectOpen;
@property (nonatomic) q rankType;
@property (nonatomic) q rank;
@property (nonatomic) BattleStarActivityGradeMedal starActivityGradeMedal;
@property (nonatomic) BOOL hasStarActivityGradeMedal;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) HTSLiveImage assetImage;
@property (nonatomic) BOOL hasAssetImage;
@property (nonatomic) NSInteger playPriority;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
+ (id)descriptor;
@end
