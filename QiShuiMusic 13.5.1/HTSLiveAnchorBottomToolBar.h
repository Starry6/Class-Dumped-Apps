@interface HTSLiveAnchorBottomToolBar : IESLivePBBaseMessage
@property (nonatomic) HTSLiveAnchorLinkmicEntranceInfo anchorLinkmicEntrance;
@property (nonatomic) BOOL hasAnchorLinkmicEntrance;
@property (nonatomic) HTSLiveAudienceLinkmicEntranceInfo audienceLinkmicEntrance;
@property (nonatomic) BOOL hasAudienceLinkmicEntrance;
+ (id)descriptor;
@end
