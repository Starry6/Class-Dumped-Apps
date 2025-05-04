@interface AWEIMResponseToWhoSeeMyStoryMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) NSString noticeText;
@property (nonatomic) UIImage videoImage;
@property (nonatomic) BOOL iconHidden;
@property (nonatomic) BOOL nonexistentContainerHidden;
@property (nonatomic) NSMutableAttributedString storyReplayAttriStr;
- (id)videoImage;
- (void)setVideoImage:;
- (void)setNonexistentContainerHidden:;
- (void)setStoryReplayAttriStr:;
- (BOOL)nonexistentContainerHidden;
- (id)storyReplayAttriStr;
- (void).cxx_destruct;
- (id)noticeText;
- (void)setNoticeText:;
- (id)tapAction;
- (void)setTapAction:;
- (BOOL)iconHidden;
- (void)setIconHidden:;
@end
