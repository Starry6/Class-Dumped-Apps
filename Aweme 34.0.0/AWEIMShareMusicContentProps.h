@interface AWEIMShareMusicContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) AWEURLModel musicCoverURL;
- (id)musicCoverURL;
- (void)setMusicCoverURL:;
- (id)subtitle;
- (void)setSubtitle:;
- (id)conversationID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setConversationID:;
- (id)tapAction;
- (void)setTapAction:;
@end
