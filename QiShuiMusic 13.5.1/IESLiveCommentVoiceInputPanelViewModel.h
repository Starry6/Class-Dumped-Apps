@interface IESLiveCommentVoiceInputPanelViewModel : NSObject
@property (nonatomic) IESLiveCommentContext commentContext;
@property (nonatomic) NSString voiceToTextStr;
- (id)commentContext;
- (void)setCommentContext:;
- (void)setVoiceToTextStr:;
- (id)voiceRouter;
- (id)voiceToTextStr;
- (void).cxx_destruct;
@end
