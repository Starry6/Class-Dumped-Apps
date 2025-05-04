@interface AWESearchLocationTopGovernNoticeView : UIView
@property (nonatomic) UIImageView noticeIcon;
@property (nonatomic) UIView dividerView;
@property (nonatomic) UILabel noticeTitle;
@property (nonatomic) UILabel noticeContent;
@property (nonatomic) UIImageView gotoDetailIcon;
@property (nonatomic) <AWESearchLocationTopGovernNoticeViewDelegate> delegate;
- (id)noticeContent;
- (void)setNoticeContent:;
- (id)noticeIcon;
- (void)refreshWithModel:;
- (id)initWithModel:delegate:;
- (void)gotoDetail;
- (id)noticeTitle;
- (id)gotoDetailIcon;
- (void)setNoticeIcon:;
- (void)setNoticeTitle:;
- (void)setGotoDetailIcon:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)setDividerView:;
- (id)dividerView;
@end
