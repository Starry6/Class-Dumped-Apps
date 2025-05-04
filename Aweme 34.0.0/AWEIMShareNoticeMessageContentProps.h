@interface AWEIMShareNoticeMessageContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSArray coverUrlList;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString detailTitle;
@property (nonatomic) @? tapAction;
- (id)coverUrlList;
- (void)setCoverUrlList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setDetailTitle:;
- (id)detailTitle;
- (id)tapAction;
- (void)setTapAction:;
@end
