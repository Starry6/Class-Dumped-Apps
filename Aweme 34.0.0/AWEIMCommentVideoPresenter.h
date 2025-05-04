@interface AWEIMCommentVideoPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIViewPresenter line;
@property (nonatomic) AWEIMMediaPresenter media;
@property (nonatomic) AWEIMUILabelPresenter invisibleStatusLabel;
- (void)didReceiveProps:;
- (id)invisibleStatusLabel;
- (void)setInvisibleStatusLabel:;
- (id)initWithContext:;
- (id)line;
- (void).cxx_destruct;
- (id)media;
- (void)setLine:;
- (void)setMedia:;
@end
