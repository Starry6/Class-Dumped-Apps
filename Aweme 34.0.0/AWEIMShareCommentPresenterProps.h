@interface AWEIMShareCommentPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMVideoCommentShareTableViewCellViewModel cellViewModel;
@property (nonatomic) @? didTapComment;
@property (nonatomic) NSString headerString;
@property (nonatomic) NSString commentString;
@property (nonatomic) NSString invisibleString;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) BOOL chatListHasBackgroundImg;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (BOOL)chatListHasBackgroundImg;
- (void)setInvisibleString:;
- (void)setChatListHasBackgroundImg:;
- (id)invisibleString;
- (void)setDidTapComment:;
- (id)didTapComment;
- (id)commentString;
- (void)setCommentString:;
- (void).cxx_destruct;
- (id)headerString;
- (void)setHeaderString:;
- (BOOL)contentIsAvailable;
- (void)setContentIsAvailable:;
@end
