@interface AWEIMEmoticonPanelTabInitContext : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL isCompanyChat;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) BOOL isShowingInImageVideoDisplayViewController;
@property (nonatomic) BOOL isShowingInFeedDetailViewController;
@property (nonatomic) BOOL shouldFilterAIStyle;
@property (nonatomic) BOOL shouldFilterSubscribe;
@property (nonatomic) BOOL onlyDefaultEmoji;
- (BOOL)isCompanyChat;
- (void)setIsCompanyChat:;
- (BOOL)needDefaultEmotionIconPanelOnly;
- (void)setNeedDefaultEmotionIconPanelOnly:;
- (BOOL)isShowingInImageVideoDisplayViewController;
- (void)setIsShowingInImageVideoDisplayViewController:;
- (BOOL)isShowingInFeedDetailViewController;
- (void)setIsShowingInFeedDetailViewController:;
- (void)setShouldFilterAIStyle:;
- (BOOL)onlyDefaultEmoji;
- (BOOL)shouldFilterAIStyle;
- (BOOL)shouldFilterSubscribe;
- (void)setShouldFilterSubscribe:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
