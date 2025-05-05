@interface IESECLiveAnchorStorageManager : NSObject
@property (nonatomic) BOOL hasShownExplainProductReplayGuide;
- (BOOL)askExplainGuideEverShowWithUID:;
- (id)getSettingGuideBubbleDataWithUID:;
- (BOOL)hasShownAnchorSettingGuideWithUID:;
- (BOOL)hasShownExplainProductReplayGuide;
- (BOOL)hasShownSettingSubHintWithName:withUID:;
- (void)setAskExplainGuideEverShow:withUID:;
- (void)setHasShownAnchorSettingGuide:withUID:;
- (void)setHasShownExplainProductReplayGuide:;
- (void)setHasShownSettingSubHint:withName:withUID:;
- (void)setSettingsGuideBubbleDataWithUID:bubbleDataDic:;
+ (id)shared;
@end
