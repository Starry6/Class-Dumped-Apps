@interface AWEIMPrivateMessageRecentlyReplyView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIStackView recentEmoticonView;
@property (nonatomic) NSArray recentlyUsedEmoticons;
@property (nonatomic) <AWEIMPrivateMessageRecentlyReplyViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowRecentlyUsedEmmoticons;
- (void)didTapEmoticonButton:;
- (void)p_loadRecentlyUsedEmoticon;
- (void)p_setupLayout;
- (void)p_setupUI;
- (id)recentEmoticonView;
- (id)recentlyUsedEmoticons;
- (void)setRecentEmoticonView:;
- (void)setRecentlyUsedEmoticons:;
- (void)setShouldShowRecentlyUsedEmmoticons:;
- (BOOL)shouldShowRecentlyUsedEmmoticons;
- (void)updateRecentlyUsedEmoticons;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
@end
