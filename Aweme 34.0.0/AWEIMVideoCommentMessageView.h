@interface AWEIMVideoCommentMessageView : UIView
@property (nonatomic) AWEIMVideoCommentMessageProps props;
@property (nonatomic) AWEIMRefreshImageView videoCoverImageView;
@property (nonatomic) YYLabel commentLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoCoverImageView;
- (void)setVideoCoverImageView:;
- (void)p_addGesture;
- (void)p_addSubviews;
- (id)gestureResponseViews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTap:;
- (id)p_getDrawFrameForImage:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)commentLabel;
- (void)setCommentLabel:;
- (void)setProps:;
@end
