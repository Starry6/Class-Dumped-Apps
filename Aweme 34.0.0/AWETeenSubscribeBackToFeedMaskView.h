@interface AWETeenSubscribeBackToFeedMaskView : UIView
@property (nonatomic) UILabel msgLabel;
@property (nonatomic) UIButton backToFeedButton;
@property (nonatomic) UILabel backToFeedLabel;
@property (nonatomic) UIImageView backToFeedImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) <AWETeenSubscribeBackToFeedMaskViewDelegate> delegate;
- (void)setMsgLabel:;
- (id)msgLabel;
- (void)p_renderUI;
- (id)backToFeedButton;
- (id)backToFeedLabel;
- (id)backToFeedImageView;
- (void)backToFeedClick:;
- (void)setBackToFeedButton:;
- (void)setBackToFeedLabel:;
- (void)setBackToFeedImageView:;
- (void)show;
- (id)init;
- (id)delegate;
- (id)containerView;
- (void)dismiss;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
