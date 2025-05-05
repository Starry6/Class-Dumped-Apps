@interface IESLiveSaaSPBRankListAwardMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q assetId;
@property (nonatomic) BOOL effectOpen;
@property (nonatomic) q rankType;
@property (nonatomic) q rank;
@property (nonatomic) IESLiveSaaSPBBattleStarActivityGradeMedal starActivityGradeMedal;
@property (nonatomic) BOOL hasStarActivityGradeMedal;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) IESLiveSaaSPBImage assetImage;
@property (nonatomic) BOOL hasAssetImage;
@property (nonatomic) NSInteger playPriority;
+ (id)descriptor;
@end
