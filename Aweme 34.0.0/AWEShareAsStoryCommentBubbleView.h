@interface AWEShareAsStoryCommentBubbleView : UIView
@property (nonatomic) UIImage commentImage;
@property (nonatomic) UIImageView commentImageView;
@property (nonatomic) YYLabel userNameLabel;
@property (nonatomic) YYLabel commentContentLabel;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (id)commentContentLabel;
- (void)setCommentContentLabel:;
- (id)commentImageView;
- (void)setCommentImage:;
- (id)commentImage;
- (void)setCommentImageView:;
- (id)initWithUserName:commentContent:commentImage:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
