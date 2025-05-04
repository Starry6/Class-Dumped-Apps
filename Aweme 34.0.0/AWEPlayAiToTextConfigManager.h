@interface AWEPlayAiToTextConfigManager : NSObject
@property (nonatomic) NSDictionary config;
- (BOOL)hasTranscribeText:referString:;
- (id)panelTitle;
- (BOOL)shouldAITextEntranceInLongPressPanelWithModel:referString:;
- (BOOL)enableAIText;
- (BOOL)isEntranceInPanel;
- (id)longPressPaelEntranceTitle;
- (BOOL)shouldAITextTagInMarqueeActiveWithModel:referString:;
- (BOOL)isReplaceMarqueeStyle;
- (BOOL)shouldAITextTagActiveWithModel:referString:;
- (BOOL)isEntranceInMarqueeStyle;
- (BOOL)hasTranscribeTextWithAweme:referString:;
- (BOOL)shouleTrackForAIText:referString:;
- (long long)secondOfDelayShow;
- (BOOL)hasBottomInteraction;
- (BOOL)hasSearchEntrance;
- (BOOL)hasForwardEntrance;
- (id)textAreaBottomTips;
- (id)forwardSentenceTitle;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
