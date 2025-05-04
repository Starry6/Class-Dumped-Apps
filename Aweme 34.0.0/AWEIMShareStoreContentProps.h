@interface AWEIMShareStoreContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? coverTappedActionBlock;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString conversationID;
@property (nonatomic) AWEURLModel avatarURLModel;
- (void)setAvatarURLModel:;
- (id)avatarURLModel;
- (void)setCoverTappedActionBlock:;
- (id)coverTappedActionBlock;
- (id)subtitle;
- (void)setSubtitle:;
- (id)conversationID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setConversationID:;
@end
