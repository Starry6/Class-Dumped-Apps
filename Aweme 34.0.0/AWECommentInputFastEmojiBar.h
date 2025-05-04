@interface AWECommentInputFastEmojiBar : UIStackView
@property (nonatomic) NSArray recentEmotIcons;
@property (nonatomic) @? clickedCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recentEmotIcons;
- (void)handleEmotIconClick:;
- (void)setRecentEmotIcons:;
- (id)clickedCompletion;
- (void)updateEmoji;
- (void)setClickedCompletion:;
- (id)init;
- (void).cxx_destruct;
- (double)barWidth;
- (void)setupUI;
@end
