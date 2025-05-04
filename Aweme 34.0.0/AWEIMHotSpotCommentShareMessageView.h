@interface AWEIMHotSpotCommentShareMessageView : UIView
@property (nonatomic) AWEIMHotSpotCommentShareMessageProps props;
@property (nonatomic) AWEIMCommentShareCommentBubleView commentBubleView;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)commentBubleView;
- (void)setCommentBubleView:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
