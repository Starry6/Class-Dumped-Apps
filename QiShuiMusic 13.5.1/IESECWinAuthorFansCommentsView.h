@interface IESECWinAuthorFansCommentsView : UIView
@property (nonatomic) UILabel commentsTitleLabel;
@property (nonatomic) UIImageView commentsArrowView;
@property (nonatomic) IESECWinAuthorCommentsView commentsView;
@property (nonatomic) <IESECWinAuthorFansCommentsViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindWithModelArray:;
- (id)commentsArrowView;
- (id)commentsTitleLabel;
- (id)commentsView;
- (void)setCommentsArrowView:;
- (void)setCommentsTitleLabel:;
- (void)setCommentsView:;
- (void)tapCellWithImpressionWord:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setUpConstraints;
@end
