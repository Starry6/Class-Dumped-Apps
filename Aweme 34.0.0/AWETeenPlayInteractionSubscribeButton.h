@interface AWETeenPlayInteractionSubscribeButton : UIView
@property (nonatomic) UIButton subscribeButton;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWETeenPlayInteractionContext context;
@property (nonatomic) BOOL isSubscribing;
- (void)p_setupUI;
- (id)initWithModel:context:;
- (void)p_subscribe:;
- (id)getTitleAction:;
- (void)setIsSubscribing:;
- (BOOL)isSubscribing;
- (void)updateSubscribeStatus:;
- (void)p_clickSubscribeButton:;
- (void)setModel:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)subscribeButton;
- (void)setSubscribeButton:;
@end
