@interface IESLiveAdventureCardInfo : IESLivePBBaseMessage
@property (nonatomic) q cardId;
@property (nonatomic) q fromStageId;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q pairId;
@property (nonatomic) IESLiveAdventurFont title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) q cardUniqueId;
@property (nonatomic) IESLiveAdventurFont timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSString pairedUserNicknameColor;
@property (nonatomic) NSString cardUniqueIdStr;
@property (nonatomic) NSString pairIdStr;
+ (id)descriptor;
@end
