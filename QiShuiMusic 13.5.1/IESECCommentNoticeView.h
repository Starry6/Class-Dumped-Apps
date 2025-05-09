@interface IESECCommentNoticeView : IESECGradientView
@property (nonatomic) IESECUIImageView noticeImageView;
@property (nonatomic) UILabel noticeStringLabel;
@property (nonatomic) IESECGradientView leftGradientView;
@property (nonatomic) IESECGradientView rightGradientView;
@property (nonatomic) UIView sortAreaView;
@property (nonatomic) IESECHighlightButton complexCommentsButton;
@property (nonatomic) IESECHighlightButton lastedCommentsButton;
@property (nonatomic) UILabel verticalLineLabel;
@property (nonatomic) <IESECCommentNoticeDelegate> delegate;
@property (nonatomic) BOOL isSortByTime;
- (id)noticeImageView;
- (id)complexCommentsButton;
- (BOOL)isSortByTime;
- (id)lastedCommentsButton;
- (id)leftGradientView;
- (id)noticeStringLabel;
- (id)rightGradientView;
- (void)setComplexCommentsButton:;
- (void)setIsSortByTime:;
- (void)setLastedCommentsButton:;
- (void)setLeftGradientView:;
- (void)setNoticeImageView:;
- (void)setNoticeStringLabel:;
- (void)setRightGradientView:;
- (void)setSortAreaView:;
- (void)setVerticalLineLabel:;
- (id)sortAreaView;
- (void)tapComplexCommentsButton;
- (void)tapLastedCommentsButton;
- (void)updateNoticeText:;
- (void)updateSimilarNoticeConstraint;
- (void)updateSimilarNoticeText:;
- (void)updateSortedStatus:;
- (id)verticalLineLabel;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
@end
