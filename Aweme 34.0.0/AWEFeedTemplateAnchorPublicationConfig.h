@interface AWEFeedTemplateAnchorPublicationConfig : AWEFeedTemplateAnchorBaseConfig
@property (nonatomic) <AWEKnowledgeBookService> bookService;
@property (nonatomic) BOOL videoIsPlayingWhenOpenBookDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bookDetailPartialSheet:play:;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)setBookService:;
- (id)bookService;
- (void)setVideoIsPlayingWhenOpenBookDetail:;
- (BOOL)videoIsPlayingWhenOpenBookDetail;
- (void).cxx_destruct;
@end
