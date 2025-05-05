@interface IESLiveFeedAudioMVAdapter : NSObject
- (void)handleMVSEIDataIfNeed:;
- (void)handleSEIData:;
- (void)onMessageReceivedFromPrestream:withDict:;
- (void)setupMVBackgroundAudioMultiStageView:;
- (id)initWithRoom:;
@end
