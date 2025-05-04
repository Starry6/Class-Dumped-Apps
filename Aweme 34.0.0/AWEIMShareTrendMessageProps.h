@interface AWEIMShareTrendMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString conversationID;
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) NSString shootSameLableText;
@property (nonatomic) @? tapAction;
- (id)urlModel;
- (void)setUrlModel:;
- (void)setShootSameLableText:;
- (id)shootSameLableText;
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
