@interface IESLiveInteractionStageManager : NSObject
@property (nonatomic) <IESLiveInteractionStage> stage;
@property (nonatomic) IESLiveInteractionLayout layout;
@property (nonatomic) BOOL liveBigPartyStageOutOfStateEnable;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) IESLiveInteractionLayout currentLayout;
@property (nonatomic) NSHashTable stageFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeStageIfNeededFrom:to:completion:;
- (void)changeStageIfNeededTo:completion:;
- (void)cleanStage;
- (void)didSetAttachingDIContext;
- (BOOL)liveBigPartyStageOutOfStateEnable;
- (void)loadStageIfNeededFrom:to:completion:;
- (void)setIsAudio:;
- (void)setLiveBigPartyStageOutOfStateEnable:;
- (void)setStageFactory:;
- (id)stageFactory;
- (id)stageWithLayout:;
- (void)updateRoomThemeData:;
- (id)stage;
- (id)init;
- (void)dealloc;
- (void)setLayout:;
- (id)currentLayout;
- (void)setStage:;
- (BOOL)isAnchor;
- (id)layout;
- (void).cxx_destruct;
- (BOOL)isAudio;
@end
