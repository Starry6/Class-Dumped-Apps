@interface AWEIMGeneralDisableCardView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (nonatomic) NSString conversationID;
- (void)awe_themeReload;
- (void)p_addObserver;
- (BOOL)chatListHasBackgroundImg;
- (void)setChatListHasBackgroundImg:;
- (void)p_setupUIs;
- (void)p_chatBackgroundDidChangeNty:;
- (void)p_setupBackgroundColor;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (id)conversationID;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setConversationID:;
@end
