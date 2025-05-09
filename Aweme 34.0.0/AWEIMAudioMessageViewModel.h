@interface AWEIMAudioMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) AWEIMMessage<AWEIMAudioMessageProtocol> message;
@property (nonatomic) NSString replyedMessageID;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) AWEIMAudioPlayStatusObserver playObserver;
@property (nonatomic) AWEIMAudioTranslateStatusObserver translateObserver;
- (void)playAudioSeekToTime:;
- (void)setDownloadVM:;
- (id)downloadVM;
- (void)setupWithMessage:;
- (id)playObserver;
- (void)configDownload;
- (void)audioMessageBubbleTapped;
- (void)pausePlayAudio;
- (void)trackDidPanAudioPlayProgressBar;
- (void)stopPlayAudioMsgIfNeeded;
- (void)setPlayObserver:;
- (void)startPlayAudio;
- (id)initWithMessage:replyedMessageID:;
- (id)p_fetchNextAudioMessageIDs:afterMessageID:;
- (void)trackTranslateOrFold:params:;
- (id)translateObserver;
- (id)replyedMessageID;
- (void)startPlayAudioWithoutAutoContinue;
- (void)continuePlayUnreadAudioMessageAfterMessageIDIfNeeded:;
- (void)translateAudioToTextWithParam:;
- (void)cancelTranslateAudio;
- (id)firstUnreadAudioMessageID;
- (void)setTranslateObserver:;
- (void)setReplyedMessageID:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)initWithMessage:;
+ (double)calculateTimeLabelWidthWithDuration:;
+ (id)getObserverForMessage:;
@end
