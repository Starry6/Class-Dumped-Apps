@interface IESECCommentNoticeDecorationView : UICollectionReusableView
@property (nonatomic) UIView spaceView;
@property (nonatomic) IESECCommentNoticeView similarNoticeView;
@property (nonatomic) IESECCommentNoticeView noticeView;
@property (nonatomic) BOOL mediaMode;
- (BOOL)mediaMode;
- (id)noticeView;
- (void)setMediaMode:;
- (void)setNoticeView:;
- (void)setSimilarNoticeView:;
- (void)setSpaceView:;
- (id)similarNoticeView;
- (id)spaceView;
- (void)updateNoticeText:;
- (void)updateOnlySimilarStyle:logoString:;
- (void)updateSimilarNoticeText:;
- (id)initWithFrame:;
- (void)applyLayoutAttributes:;
- (void).cxx_destruct;
- (void)setupUI;
@end
