@interface AWEIMPrivateMessageRecentlyReplyView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIStackView recentEmoticonView;
@property (nonatomic) NSArray recentlyUsedEmoticons;
@property (nonatomic) <AWEIMPrivateMessageRecentlyReplyViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowRecentlyUsedEmmoticons;
- (void)p_setupUI;
- (id)recentlyUsedEmoticons;
- (void)p_setupLayout;
- (void)updateRecentlyUsedEmoticons;
- (void)didTapEmoticonButton:;
- (void)p_loadRecentlyUsedEmoticon;
- (id)recentEmoticonView;
- (void)setRecentlyUsedEmoticons:;
- (void)setShouldShowRecentlyUsedEmmoticons:;
- (BOOL)shouldShowRecentlyUsedEmmoticons;
- (void)setRecentEmoticonView:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
