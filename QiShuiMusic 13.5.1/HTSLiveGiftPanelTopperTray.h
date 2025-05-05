@interface HTSLiveGiftPanelTopperTray : IESLivePBBaseMessage
@property (nonatomic) NSString panelSchema;
@property (nonatomic) NSMutableArray periodTextsArray;
@property (nonatomic) Q periodTextsArray_Count;
@property (nonatomic) NSInteger displayDuration;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString animationType;
@property (nonatomic) NSInteger animationGap;
@property (nonatomic) NSInteger animationFreq;
@property (nonatomic) NSInteger textRoundPeriod;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
