@interface AWEIMShareStoryMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) BOOL sendFromMe;
@property (nonatomic) NSString noticeLableText;
@property (nonatomic) UIImage videoImage;
@property (nonatomic) BOOL hiddenPlayIcon;
@property (nonatomic) BOOL hiddennonexistentContainer;
@property (nonatomic) NSString storyReplyStr;
- (BOOL)sendFromMe;
- (void)setSendFromMe:;
- (id)videoImage;
- (void)setVideoImage:;
- (void)setNoticeLableText:;
- (void)setHiddenPlayIcon:;
- (void)setHiddennonexistentContainer:;
- (id)storyReplyStr;
- (void)setStoryReplyStr:;
- (BOOL)hiddennonexistentContainer;
- (id)noticeLableText;
- (BOOL)hiddenPlayIcon;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
